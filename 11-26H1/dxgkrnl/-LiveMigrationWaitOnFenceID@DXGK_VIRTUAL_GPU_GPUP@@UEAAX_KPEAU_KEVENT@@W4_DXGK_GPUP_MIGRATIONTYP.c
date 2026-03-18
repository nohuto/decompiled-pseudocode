/*
 * XREFs of ?LiveMigrationWaitOnFenceID@DXGK_VIRTUAL_GPU_GPUP@@UEAAX_KPEAU_KEVENT@@W4_DXGK_GPUP_MIGRATIONTYPE@@@Z @ 0x14021F050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

LONG __fastcall DXGK_VIRTUAL_GPU_GPUP::LiveMigrationWaitOnFenceID(__int64 a1, __int64 a2, struct _KEVENT *a3, int a4)
{
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = a2;
  if ( a4 == 1 && *(_BYTE *)(a1 + 332) || *(_BYTE *)(a1 + 352) )
    return KeSetEvent(a3, 0, 0);
  else
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64, struct _KEVENT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 760LL) + 8LL)
                                                                                           + 1272LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 768LL),
             0LL,
             &v5,
             1LL,
             a3);
}
