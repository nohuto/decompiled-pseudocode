/*
 * XREFs of ?CrmpActivityContextStart@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_ACTIVITY_ID@@PEAU_ACTIVITY_COORDINATOR_RESOURCE_CONDITIONS@@PEAGPEAKP6AXPEAX6W4_CRM_NOTIFICATION_TYPE@@66@Z6@Z @ 0x180004BA0
 * Callers:
 *     CrmActivityAllocateInternal @ 0x180004990 (CrmActivityAllocateInternal.c)
 *     CrmActivityAllocate @ 0x180004AA0 (CrmActivityAllocate.c)
 * Callees:
 *     <none>
 */

int __fastcall CrmpActivityContextStart(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        __int64 a8)
{
  HANDLE EventW; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // r15
  CLIENT_CALL_RETURN v16; // rax
  __int64 v18; // [rsp+58h] [rbp-40h] BYREF
  CLIENT_CALL_RETURN v19; // [rsp+60h] [rbp-38h]

  v18 = -1LL;
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *(_QWORD *)(a1 + 64) = EventW;
  if ( EventW )
  {
    v13 = *(_QWORD *)(a2 + 16);
    if ( v13 )
    {
      v15 = a6;
      LODWORD(v16.Pointer) = CrmpInProcActivityAllocate(&v18, v13, a3, a4, a5, a1 + 40, a6);
    }
    else
    {
      v14 = *(_QWORD *)(a2 + 8);
      v19.Simple = 0LL;
      v15 = a6;
      v16.Pointer = NdrClientCall3(
                      (MIDL_STUBLESS_PROXY_INFO *)&stru_18001DC50,
                      2u,
                      0LL,
                      &v18,
                      v14,
                      a3,
                      a4,
                      a5,
                      a1 + 40,
                      a6).Pointer;
      v19.Pointer = v16.Pointer;
    }
    if ( SLODWORD(v16.Simple) >= 0 )
    {
      *(_QWORD *)(a1 + 16) = a2;
      *(_DWORD *)a1 = a3;
      *(_QWORD *)(a1 + 24) = a7;
      *(_QWORD *)(a1 + 32) = a8;
      *(_QWORD *)(a1 + 8) = v18;
      if ( v15 )
      {
        *(_DWORD *)(a1 + 56) = *v15;
        LODWORD(v16.Pointer) = 0;
      }
      else
      {
        *(_DWORD *)(a1 + 56) = -1;
        LODWORD(v16.Pointer) = 0;
      }
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    LODWORD(v16.Pointer) = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LODWORD(v16.Pointer) = GetLastError();
  }
  return (int)v16.Pointer;
}
