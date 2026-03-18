/*
 * XREFs of ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1403E43D8
 * Callers:
 *     ?GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIFORMAT@@@Z @ 0x1401D0AB8 (-GetOwnedSourceAndPixelFormatFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAIAEAW4_D3DDDIF.c)
 *     DxgkDispMgrIsTargetOwned @ 0x1403E43C0 (DxgkDispMgrIsTargetOwned.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??9DXGTARGETENTRY@@QEBA_NAEBV0@@Z @ 0x1403E448C (--9DXGTARGETENTRY@@QEBA_NAEBV0@@Z.c)
 */

char __fastcall DXGDISPLAYMANAGEROBJECT::ContainsTarget(DXGDISPLAYMANAGEROBJECT *this, struct _LUID a2, int a3)
{
  __int64 *v6; // rdi
  char v7; // bl
  __int64 *v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v11; // r8
  __int64 *v13; // rax
  _BYTE v14[16]; // [rsp+20h] [rbp-48h] BYREF
  void **v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+38h] [rbp-30h]
  struct _LUID v17; // [rsp+48h] [rbp-20h]
  int v18; // [rsp+50h] [rbp-18h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  v6 = (__int64 *)((char *)this + 104);
  v17 = a2;
  v18 = a3;
  v7 = 0;
  v15 = &SetElement::`vftable';
  v8 = 0LL;
  v9 = *v6;
  v10 = *v6 == (_QWORD)v6;
  v16 = 0LL;
  if ( !v10 )
    v8 = (__int64 *)(v9 - 8);
  while ( v8 )
  {
    if ( !(unsigned __int8)DXGTARGETENTRY::operator!=(v8) )
    {
      v7 = 1;
      break;
    }
    v13 = *(__int64 **)(v11 + 8);
    v8 = v13 - 1;
    if ( v13 == v6 )
      v8 = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
  return v7;
}
