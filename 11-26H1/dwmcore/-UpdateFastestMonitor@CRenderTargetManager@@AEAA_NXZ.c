/*
 * XREFs of ?UpdateFastestMonitor@CRenderTargetManager@@AEAA_NXZ @ 0x1801B3CCC
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180031700 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CRenderTargetManager::UpdateFastestMonitor(CRenderTargetManager *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // r14
  __int64 v4; // r13
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  bool result; // al
  unsigned __int64 v8; // r12
  _QWORD *v9; // rdi
  __int64 v10; // r15
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  bool v14; // zf

  v1 = (_QWORD *)*((_QWORD *)this + 3);
  v2 = (_QWORD *)((char *)this + 8);
  v4 = *((_QWORD *)this + 1);
  v5 = (__int64)(*((_QWORD *)this + 4) - (_QWORD)v1) >> 3;
  if ( v5 > 1 )
  {
    v8 = -1LL;
    *v2 = *(_QWORD *)this;
    *((_QWORD *)this + 2) = 0LL;
    v9 = (_QWORD *)*((_QWORD *)this + 4);
    while ( v1 != v9 )
    {
      v10 = *v1;
      v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 168LL))(*v1);
      v12 = v11;
      if ( v11 )
      {
        if ( !*((_QWORD *)this + 2) || v11 > *((_QWORD *)this + 2) )
          *((_QWORD *)this + 2) = v11;
        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 176LL))(v10) )
        {
          if ( v12 == v8 )
          {
            if ( v10 == *(_QWORD *)this )
              *v2 = *(_QWORD *)this;
          }
          else if ( v12 < v8 )
          {
            v8 = v12;
            *v2 = v10;
          }
        }
      }
      ++v1;
    }
    if ( *((_BYTE *)this + 752) )
    {
      v13 = *((_QWORD *)this + 1);
      if ( v13 != *(_QWORD *)this )
      {
        v14 = CCommonRegistryData::m_compositorClockPolicy == 0;
        *(_QWORD *)this = v13;
        if ( v14 )
          *((_BYTE *)g_pComposition + 6460) = 1;
      }
    }
    v2 = (_QWORD *)((char *)this + 8);
  }
  else if ( v5 == 1 )
  {
    v6 = *v1;
    *v2 = *v1;
    *((_QWORD *)this + 2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 168LL))(v6);
  }
  else
  {
    *v2 = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  result = *v2 != v4;
  *((_BYTE *)this + 748) = 0;
  return result;
}
