/*
 * XREFs of GreEqualRgn @ 0x14012AF60
 * Callers:
 *     <none>
 * Callees:
 *     ?get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x14000EE30 (-get_pscnTail@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memcmp @ 0x14024C590 (memcmp.c)
 */

_BOOL8 __fastcall GreEqualRgn(HRGN a1, HRGN a2)
{
  BOOL v3; // ebx
  REGION_CORE *v5; // r14
  REGION_CORE *v6; // rbx
  unsigned int pScan; // esi
  struct SCAN *v8; // rdi
  struct SCAN *v9; // rbx
  unsigned int pscnTail; // eax
  unsigned __int64 v11; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v12[5]; // [rsp+30h] [rbp-11h] BYREF
  int v13; // [rsp+58h] [rbp+17h]
  __int64 v14; // [rsp+60h] [rbp+1Fh] BYREF
  _QWORD v15[5]; // [rsp+68h] [rbp+27h] BYREF
  int v16; // [rsp+90h] [rbp+4Fh]

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v14, a1, 1, 0);
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)&v11, a2, 1, 0);
  v3 = 0;
  if ( v14 && v11 )
  {
    v5 = (REGION_CORE *)((v14 + 24) & -(__int64)(v14 != 0));
    v6 = (REGION_CORE *)((v11 + 24) & ((unsigned __int128)-(__int128)v11 >> 64));
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v3 = (*(__int64 (__fastcall **)(REGION_CORE *, REGION_CORE *))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 88LL))(
             v5,
             v6) != 0;
    }
    else
    {
      v3 = 0;
      if ( *(_DWORD *)(((v14 + 24) & -(__int64)(v14 != 0)) + 0x18) == *(_DWORD *)(((v11 + 24) & ((unsigned __int128)-(__int128)v11 >> 64))
                                                                                + 0x18) )
      {
        pScan = (unsigned int)REGION_CORE::get_pScan(v5);
        v8 = REGION_CORE::get_pScan(v6);
        v9 = REGION_CORE::get_pScan(v5);
        pscnTail = (unsigned int)REGION_CORE::get_pscnTail(v5);
        if ( !memcmp(v9, v8, pscnTail - pScan) )
          v3 = 1;
      }
    }
  }
  if ( !v13 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v11);
  if ( v11 )
    _InterlockedDecrement16((volatile signed __int16 *)(v11 + 12));
  PopThreadGuardedObject(v12);
  if ( !v16 )
    RGNOBJ::UpdateUserRgn((RGNOBJ *)&v14);
  if ( v14 )
    _InterlockedDecrement16((volatile signed __int16 *)(v14 + 12));
  PopThreadGuardedObject(v15);
  return v3;
}
