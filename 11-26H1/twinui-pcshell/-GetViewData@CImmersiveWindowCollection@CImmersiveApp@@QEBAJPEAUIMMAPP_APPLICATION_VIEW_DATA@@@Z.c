/*
 * XREFs of ?GetViewData@CImmersiveWindowCollection@CImmersiveApp@@QEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x1801AAA14
 * Callers:
 *     ?GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z @ 0x1801AA9C0 (-GetViewDataInternal@CImmersiveApp@@UEBAJPEAUIMMAPP_APPLICATION_VIEW_DATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::GetViewData(
        CImmersiveApp::CImmersiveWindowCollection *this,
        struct IMMAPP_APPLICATION_VIEW_DATA *a2)
{
  unsigned int v2; // r8d
  __int128 v4; // xmm2
  __int64 v5; // xmm0_8

  v2 = 0;
  *((_QWORD *)a2 + 4) = 3LL;
  *(_QWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 5) = 0LL;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_QWORD *)a2 + 7) = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 9) = 3LL;
  if ( *((_DWORD *)this + 8) == -1 || *((_DWORD *)this + 18) == -1 )
  {
    return (unsigned int)-2147023728;
  }
  else
  {
    *(_OWORD *)a2 = *((_OWORD *)this + 2);
    *((_OWORD *)a2 + 1) = *((_OWORD *)this + 3);
    *((_QWORD *)a2 + 4) = *((_QWORD *)this + 8);
    v4 = *(_OWORD *)((char *)this + 88);
    v5 = *((_QWORD *)this + 13);
    *(_OWORD *)((char *)a2 + 40) = *(_OWORD *)((char *)this + 72);
    *(_OWORD *)((char *)a2 + 56) = v4;
    *((_QWORD *)a2 + 9) = v5;
  }
  return v2;
}
