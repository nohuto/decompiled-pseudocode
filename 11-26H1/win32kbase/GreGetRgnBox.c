/*
 * XREFs of GreGetRgnBox @ 0x140022720
 * Callers:
 *     NtGdiGetRgnBox @ 0x1400230D0 (NtGdiGetRgnBox.c)
 * Callees:
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreGetRgnBox(HRGN a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  _QWORD **v6; // rax
  PVOID DeferredContext; // r8
  __int64 v9; // rdx
  unsigned int sizeScan; // eax
  bool v11; // cf
  bool v12; // zf
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h] BYREF
  _QWORD **v15; // [rsp+30h] [rbp-30h]
  int v16; // [rsp+50h] [rbp-10h]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v13, a1, 1, 0);
  v3 = v13;
  if ( !a2 || !v13 )
  {
    v4 = 0;
    goto LABEL_4;
  }
  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v9 = v13 + 24;
  *(_OWORD *)a2 = *(_OWORD *)(v13 + 52);
  if ( DeferredContext )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeferredContext + 32LL))(v9 & -(__int64)(v3 != 0));
    v3 = v13;
    if ( v4 != 1 )
      goto LABEL_4;
  }
  else
  {
    if ( *(_DWORD *)(v3 + 48) != 1 )
    {
      sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)(v3 + 24));
      v11 = sizeScan < 0x38;
      v12 = sizeScan == 56;
      v3 = v13;
      v4 = (!v11 && !v12) + 2;
      goto LABEL_4;
    }
    v4 = 1;
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
LABEL_4:
  if ( !v16 )
  {
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v13);
    v3 = v13;
  }
  if ( v3 )
    _InterlockedDecrement16((volatile signed __int16 *)(v3 + 12));
  v5 = v14;
  v6 = v15;
  if ( *(__int64 **)(v14 + 8) != &v14 || *v15 != &v14 )
    __fastfail(3u);
  *v15 = (_QWORD *)v14;
  *(_QWORD *)(v5 + 8) = v6;
  return v4;
}
