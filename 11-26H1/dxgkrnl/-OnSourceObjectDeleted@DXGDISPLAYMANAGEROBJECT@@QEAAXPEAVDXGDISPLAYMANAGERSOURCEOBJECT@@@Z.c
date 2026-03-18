/*
 * XREFs of ?OnSourceObjectDeleted@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1401D0C70
 * Callers:
 *     ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1401D0758 (--1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::OnSourceObjectDeleted(
        DXGDISPLAYMANAGEROBJECT *this,
        struct DXGDISPLAYMANAGERSOURCEOBJECT *a2)
{
  struct DXGDISPLAYMANAGERSOURCEOBJECT *v4; // rcx
  DXGDISPLAYMANAGEROBJECT *v5; // r8
  DXGDISPLAYMANAGEROBJECT *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( a2 )
  {
    v4 = 0LL;
    v5 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 19);
    if ( v5 != (DXGDISPLAYMANAGEROBJECT *)((char *)this + 152) )
      v4 = (DXGDISPLAYMANAGEROBJECT *)((char *)v5 - 8);
    while ( v4 )
    {
      if ( v4 == a2 )
      {
        v7 = (_QWORD *)((char *)a2 + 8);
        v8 = *((_QWORD *)a2 + 1);
        if ( *(struct DXGDISPLAYMANAGERSOURCEOBJECT **)(v8 + 8) != (struct DXGDISPLAYMANAGERSOURCEOBJECT *)((char *)a2 + 8)
          || (v9 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v9 != v7) )
        {
          __fastfail(3u);
        }
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v7 = 0LL;
        *((_QWORD *)a2 + 2) = 0LL;
        --*((_QWORD *)this + 21);
        break;
      }
      v6 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)v4 + 1);
      v4 = (DXGDISPLAYMANAGEROBJECT *)((char *)v6 - 8);
      if ( v6 == (DXGDISPLAYMANAGEROBJECT *)((char *)this + 152) )
        v4 = 0LL;
    }
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
}
