/*
 * XREFs of sub_140129D80 @ 0x140129D80
 * Callers:
 *     <none>
 * Callees:
 *     sub_14006B3A4 @ 0x14006B3A4 (sub_14006B3A4.c)
 */

__int64 __fastcall sub_140129D80(__int64 a1)
{
  __int64 Context; // rdx
  _DWORD *v2; // rdi
  __int64 v3; // rax
  NTSTATUS v4; // ebx

  v2 = sub_14006B3A4(a1);
  v3 = Context + 184;
  if ( *(_BYTE *)(Context + 65) )
    *(_BYTE *)(*(_QWORD *)v3 + 3LL) |= 1u;
  v4 = *(_DWORD *)(Context + 48);
  if ( v4 >= 0
    && (v4 = PoRequestPowerIrp(
               *((PDEVICE_OBJECT *)v2 + 1),
               3u,
               stru_140148968[*(int *)(*(_QWORD *)v3 + 24LL)],
               (PREQUEST_POWER_COMPLETE)sub_1401295D0,
               (PVOID)Context,
               0LL),
        v4 >= 0) )
  {
    return (unsigned int)-1073741802;
  }
  else
  {
    ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)v2 + 19));
  }
  return (unsigned int)v4;
}
