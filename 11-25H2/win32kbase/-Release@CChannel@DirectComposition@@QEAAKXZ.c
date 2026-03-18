/*
 * XREFs of ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x140055894
 * Callers:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x140055158 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14005523C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E4978 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x140228C00 (-UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CChannel::Release(DirectComposition::CChannel *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    (*(void (__fastcall **)(DirectComposition::CChannel *))(*(_QWORD *)this + 24LL))(this);
  return v1;
}
