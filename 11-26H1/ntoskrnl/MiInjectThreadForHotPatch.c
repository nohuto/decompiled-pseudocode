/*
 * XREFs of MiInjectThreadForHotPatch @ 0x1408706B4
 * Callers:
 *     MiHotPatchProcess @ 0x140870248 (MiHotPatchProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateThreadEx @ 0x140724D10 (ZwCreateThreadEx.c)
 *     MiLogHotPatchOperationStatus @ 0x140871F28 (MiLogHotPatchOperationStatus.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1408FA680 (ObpReferenceObjectByHandleWithTag.c)
 *     PsGetThreadExitStatus @ 0x140A219D0 (PsGetThreadExitStatus.c)
 */

__int64 __fastcall MiInjectThreadForHotPatch(int a1, int a2, int a3)
{
  unsigned int v3; // ebx
  struct _KTHREAD *v7; // rdi
  struct _EX_RUNDOWN_REF *p_Blink; // r14
  BOOLEAN v9; // al
  int v10; // esi
  int Thread; // eax
  int v12; // eax
  int v13; // r8d
  int v14; // r10d
  HANDLE Handle; // [rsp+60h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp-60h] BYREF
  __int128 v18; // [rsp+70h] [rbp-58h]
  __int128 v19; // [rsp+80h] [rbp-48h]
  __int128 v20; // [rsp+90h] [rbp-38h]
  PVOID Object; // [rsp+E8h] [rbp+20h] BYREF

  v3 = 0;
  Timeout.QuadPart = 0LL;
  v18 = 0LL;
  *(_QWORD *)&v20 = 0LL;
  v19 = 0LL;
  DWORD2(v20) = 0;
  Handle = 0LL;
  v7 = 0LL;
  Object = 0LL;
  p_Blink = (struct _EX_RUNDOWN_REF *)&KeGetCurrentThread()->ApcState.Process[1].ProfileListHead.Blink;
  v9 = ExAcquireRundownProtection_0(p_Blink);
  v10 = v9;
  if ( !v9 )
  {
    v3 = -1073741558;
    goto LABEL_17;
  }
  LODWORD(v18) = 48;
  *((_QWORD *)&v18 + 1) = 0LL;
  DWORD2(v19) = 512;
  *(_QWORD *)&v19 = 0LL;
  v20 = 0LL;
  Thread = ZwCreateThreadEx((__int64)&Handle, 0x1FFFFFLL);
  if ( Thread >= 0 )
  {
    v12 = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x70486D4Du, (__int64)&Object, 0LL, 0LL);
    if ( v12 >= 0 )
    {
      ExReleaseRundownProtection_0(p_Blink);
      v7 = (struct _KTHREAD *)Object;
      v10 = 0;
      if ( !*((_BYTE *)Object + 644) && (*((_DWORD *)Object + 30) & 0x4000) == 0 )
      {
        Timeout.QuadPart = -100000000LL;
        if ( KeWaitForSingleObject(Object, WrKernel, 0, 0, &Timeout) != 258 && PsGetThreadExitStatus(v7) >= 0 )
          goto LABEL_17;
      }
    }
    else
    {
      v7 = (struct _KTHREAD *)Object;
      v3 = v12;
    }
  }
  else
  {
    v3 = Thread;
  }
  if ( stru_140E36558.FirstArgument
    && *(_DWORD *)stru_140E36558.FirstArgument
    && tlgKeywordOn((__int64)stru_140E36558.FirstArgument, 0x400000000020LL) )
  {
    MiLogHotPatchOperationStatus(v14, a2, a3, a1, v13, 3);
  }
  if ( v10 )
    ExReleaseRundownProtection_0(p_Blink);
LABEL_17:
  if ( Handle )
    ZwClose(Handle);
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x70486D4Du);
  return v3;
}
