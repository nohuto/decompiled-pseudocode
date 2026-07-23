/*
 * XREFs of SeAuditProcessExit @ 0x140818810
 * Callers:
 *     PspExitLastThread @ 0x1409FD314 (PspExitLastThread.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14091F7B0 (PsGetAllocatedFullProcessImageNameEx.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SeAuditProcessExit(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  int AllocatedFullProcessImageName; // eax
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  ULONG_PTR v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // eax
  PVOID P[2]; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD Src[12]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+68h] [rbp-A0h]
  int v15; // [rsp+70h] [rbp-98h]
  int v16; // [rsp+74h] [rbp-94h]
  const int *v17; // [rsp+88h] [rbp-80h]
  int v18; // [rsp+90h] [rbp-78h]
  int v19; // [rsp+94h] [rbp-74h]
  __int64 v20; // [rsp+98h] [rbp-70h]
  int v21; // [rsp+B0h] [rbp-58h]
  int v22; // [rsp+B4h] [rbp-54h]
  __int64 v23; // [rsp+B8h] [rbp-50h]
  int v24; // [rsp+D0h] [rbp-38h]
  int v25; // [rsp+D4h] [rbp-34h]
  __int64 v26; // [rsp+D8h] [rbp-30h]
  int v27; // [rsp+F0h] [rbp-18h]
  int v28; // [rsp+F4h] [rbp-14h]
  PVOID v29; // [rsp+108h] [rbp+0h]

  v2 = a2;
  P[0] = 0LL;
  memset_0(Src, 0, 0x418uLL);
  AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageNameEx(a1, P);
  if ( AllocatedFullProcessImageName < 0 )
  {
    SepAuditFailed((unsigned int)AllocatedFullProcessImageName);
  }
  else
  {
    v7 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v5, v6);
    v8 = *(_QWORD *)(v7 + 24);
    v9 = **(_QWORD **)(v7 + 152);
    Src[0] = 5;
    Src[4] = 524423;
    Src[1] = 4689;
    Src[6] = 4;
    v10 = *(unsigned __int8 *)(v9 + 1);
    v17 = &SeSubsystemName;
    v26 = *(_QWORD *)(a1 + 464);
    v14 = v9;
    Src[7] = 4 * v10 + 8;
    v15 = 1;
    v16 = 32;
    v18 = 5;
    v19 = 8;
    v20 = v8;
    v21 = 10;
    v22 = 4;
    v23 = v2;
    v24 = 11;
    v25 = 8;
    v27 = 2;
    v11 = *(unsigned __int16 *)P[0] + 16;
    v29 = P[0];
    v28 = v11;
    Src[2] = 6;
    SepAdtLogAuditRecord(Src);
    ObfDereferenceObject((PVOID)v7);
  }
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
}
