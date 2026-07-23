/*
 * XREFs of _PnpCtxDestroyNode @ 0x14089C0B4
 * Callers:
 *     _PnpCtxCloseMachine @ 0x14089BFF8 (_PnpCtxCloseMachine.c)
 *     _PnpCtxRegisterMachineNode @ 0x14089C3F8 (_PnpCtxRegisterMachineNode.c)
 *     _PnpCtxUnregisterMachineNode @ 0x14089C620 (_PnpCtxUnregisterMachineNode.c)
 *     _PnpCtxOpenMachine @ 0x140AE5860 (_PnpCtxOpenMachine.c)
 *     _PnpCtxCreateNode @ 0x140AE59C4 (_PnpCtxCreateNode.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     _SysCtxCloseMachine @ 0x1408A2DA0 (_SysCtxCloseMachine.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxDestroyNode(UNICODE_STRING *P)
{
  void *v2; // rcx
  wchar_t *Buffer; // rcx
  void *v4; // rcx
  wchar_t *v5; // rcx
  void *v6; // rcx
  wchar_t *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  wchar_t *v10; // rcx
  void *v11; // rcx
  wchar_t *v12; // rcx

  RtlFreeAnsiString(P + 2);
  v2 = *(void **)&P[4].Length;
  if ( v2 && v2 != (void *)-1LL )
    ZwClose(v2);
  Buffer = P[4].Buffer;
  if ( Buffer && Buffer != (wchar_t *)-1LL )
    ZwClose(Buffer);
  v4 = *(void **)&P[5].Length;
  if ( v4 && v4 != (void *)-1LL )
    ZwClose(v4);
  v5 = P[5].Buffer;
  if ( v5 && v5 != (wchar_t *)-1LL )
    ZwClose(v5);
  v6 = *(void **)&P[6].Length;
  if ( v6 && v6 != (void *)-1LL )
    ZwClose(v6);
  v7 = P[6].Buffer;
  if ( v7 && v7 != (wchar_t *)-1LL )
    ZwClose(v7);
  v8 = *(void **)&P[7].Length;
  if ( v8 && v8 != (void *)-1LL )
    ZwClose(v8);
  v9 = *(void **)&P[8].Length;
  if ( v9 && v9 != (void *)-1LL )
    ZwClose(v9);
  v10 = P[8].Buffer;
  if ( v10 && v10 != (wchar_t *)-1LL )
    ZwClose(v10);
  v11 = *(void **)&P[9].Length;
  if ( v11 && v11 != (void *)-1LL )
    ZwClose(v11);
  v12 = P[3].Buffer;
  if ( v12 )
    SysCtxCloseMachine(v12);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
