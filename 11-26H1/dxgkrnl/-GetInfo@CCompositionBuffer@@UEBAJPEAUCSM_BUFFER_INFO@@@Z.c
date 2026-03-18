/*
 * XREFs of ?GetInfo@CCompositionBuffer@@UEBAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1400A3810
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionBuffer::GetInfo(CCompositionBuffer *this, struct CSM_BUFFER_INFO *a2)
{
  __int128 v3; // xmm0
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a2 = 1;
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2);
  v3 = *((_OWORD *)this + 3);
  v6 = 0LL;
  *((_OWORD *)a2 + 1) = v3;
  *((_OWORD *)a2 + 2) = *((_OWORD *)this + 4);
  *((_OWORD *)a2 + 3) = *((_OWORD *)this + 5);
  *((_OWORD *)a2 + 4) = *((_OWORD *)this + 6);
  *((_OWORD *)a2 + 5) = *((_OWORD *)this + 7);
  *((_OWORD *)a2 + 6) = *((_OWORD *)this + 8);
  *((_OWORD *)a2 + 7) = *((_OWORD *)this + 9);
  *((_OWORD *)a2 + 8) = *((_OWORD *)this + 10);
  *((_OWORD *)a2 + 9) = *((_OWORD *)this + 11);
  result = (*(__int64 (__fastcall **)(CCompositionBuffer *, __int64 *))(*(_QWORD *)this + 232LL))(this, &v6);
  if ( (int)result >= 0 )
  {
    v5 = v6;
    *((_OWORD *)a2 + 10) = *(_OWORD *)(v6 + 24);
    *((_OWORD *)a2 + 11) = *(_OWORD *)(v5 + 40);
    *((_QWORD *)a2 + 24) = *(_QWORD *)(v5 + 56);
  }
  return result;
}
