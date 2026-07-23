/*
 * XREFs of IopPerfCompleteRequest @ 0x1403FB3E8
 * Callers:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x140C4BB00 (IovCompleteRequest.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x140267EA0 (IopFreeIrpExtension.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     IopIrpHasExtensionType @ 0x14041C8C0 (IopIrpHasExtensionType.c)
 *     IopProcessIoTracking @ 0x1405CE660 (IopProcessIoTracking.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall IopPerfCompleteRequest(__int64 BugCheckParameter1, unsigned __int8 a2)
{
  bool v2; // zf
  char v5; // cl
  char v6; // dl
  _QWORD *v7; // r14
  unsigned __int8 *v8; // rbx
  __int64 v9; // rcx
  signed __int32 v10; // esi
  bool v11; // sf
  char v12; // al
  __int64 v13; // rax
  __int128 v14; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h]
  _QWORD **v16; // [rsp+50h] [rbp-30h] BYREF
  __int64 v17; // [rsp+58h] [rbp-28h]
  _QWORD *v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h]
  signed __int32 v20; // [rsp+70h] [rbp-10h]

  v2 = *(_WORD *)BugCheckParameter1 == 6;
  v14 = 0LL;
  v15 = 0LL;
  if ( !v2 )
    goto LABEL_8;
  v5 = *(_BYTE *)(BugCheckParameter1 + 66);
  v6 = *(_BYTE *)(BugCheckParameter1 + 67);
  if ( v6 > (char)(v5 + 1) )
    goto LABEL_8;
  v7 = 0LL;
  v8 = 0LL;
  if ( v6 <= v5 )
  {
    v8 = *(unsigned __int8 **)(BugCheckParameter1 + 184);
    if ( *((_QWORD *)v8 + 5) )
    {
      if ( (IopPerfStatus & 2) != 0
        && (unsigned __int8)IopIrpHasExtensionType(BugCheckParameter1, 1LL)
        && !(unsigned __int8)IopIrpHasExtensionType(BugCheckParameter1, 4LL) )
      {
        IopProcessIoTracking(
          MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*(_QWORD *)(BugCheckParameter1 + 200) + 40LL),
          *(unsigned int *)(*((_QWORD *)v8 + 5) + 72LL));
        IopFreeIrpExtension(BugCheckParameter1, 1, 1);
      }
      v9 = *(_QWORD *)(*((_QWORD *)v8 + 5) + 8LL);
      if ( v9 )
      {
        v13 = *v8;
        if ( (unsigned __int8)v13 <= 0x1Bu )
          v7 = *(_QWORD **)(v9 + 8 * v13 + 112);
      }
    }
    else
    {
      v7 = (_QWORD *)*((_QWORD *)v8 + 7);
    }
  }
  if ( (IopPerfStatus & 1) == 0 )
  {
LABEL_8:
    IopfCompleteRequest((IRP *)BugCheckParameter1, a2);
    return;
  }
  v18 = v7;
  v19 = BugCheckParameter1;
  v10 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
  v20 = v10;
  v16 = &v18;
  v17 = 20LL;
  EtwTraceKernelEvent((int)&v16, 1, 0x20000010u, 308, 5249026);
  if ( v8 )
  {
    v11 = *(int *)(BugCheckParameter1 + 48) < 0;
    *((_QWORD *)&v14 + 1) = *((_QWORD *)v8 + 8);
    *(_QWORD *)&v14 = v8;
    DWORD2(v15) = v10;
    BYTE12(v15) = v8[3];
    v12 = v8[3];
    if ( v11 )
    {
      if ( v12 < 0 )
        goto LABEL_14;
    }
    else if ( (v12 & 0x40) != 0 )
    {
      goto LABEL_14;
    }
    if ( !*(_BYTE *)(BugCheckParameter1 + 68) || (v12 & 0x20) == 0 )
    {
      v8[3] = v12 | 0xC0;
      goto LABEL_18;
    }
LABEL_14:
    *(_QWORD *)&v15 = *((_QWORD *)v8 + 7);
    *((_QWORD *)&v14 + 1) = *((_QWORD *)v8 + 8);
LABEL_18:
    *((_QWORD *)v8 + 7) = IopPerfCompletionRoutine;
    *((_QWORD *)v8 + 8) = &v14;
  }
  IopfCompleteRequest((IRP *)BugCheckParameter1, a2);
  v16 = (_QWORD **)BugCheckParameter1;
  v18 = &v16;
  LODWORD(v17) = v10;
  v19 = 12LL;
  EtwTraceKernelEvent((int)&v18, 1, 0x20000010u, 309, 5249026);
}
