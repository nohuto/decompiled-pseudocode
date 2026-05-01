/*
 * XREFs of ?CrmpActivityQueryWindowClosedReasons@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@PEAPEAW4_CRM_WINDOW_CLOSED_REASON@@PEAK@Z @ 0x18000F220
 * Callers:
 *     CrmActivityQueryWindowClosedReasons @ 0x180011E90 (CrmActivityQueryWindowClosedReasons.c)
 * Callees:
 *     HamFreeBuffer @ 0x1800091F0 (HamFreeBuffer.c)
 */

__int64 __fastcall CrmpActivityQueryWindowClosedReasons(
        struct _CRMP_ACTIVITY_CONTEXT *a1,
        enum _CRM_WINDOW_CLOSED_REASON **a2,
        unsigned int *a3)
{
  enum _CRM_WINDOW_CLOSED_REASON *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  int Pointer; // ebx
  unsigned int v10; // [rsp+80h] [rbp+8h] BYREF
  enum _CRM_WINDOW_CLOSED_REASON **v11; // [rsp+88h] [rbp+10h]
  unsigned int *v12; // [rsp+90h] [rbp+18h]
  enum _CRM_WINDOW_CLOSED_REASON *v13; // [rsp+98h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  v5 = 0LL;
  v13 = 0LL;
  v10 = 0;
  v6 = *((_QWORD *)a1 + 2);
  v7 = *(_QWORD *)(v6 + 16);
  if ( v7 )
    Pointer = CrmpInProcActivityQueryWindowClosedReasons(*((_QWORD *)a1 + 1), v7, &v13, &v10);
  else
    Pointer = (unsigned int)NdrClientCall3(
                              (MIDL_STUBLESS_PROXY_INFO *)&stru_18001EC20,
                              3u,
                              0LL,
                              *((_QWORD *)a1 + 1),
                              *(_QWORD *)(v6 + 8),
                              &v13,
                              &v10).Pointer;
  if ( Pointer < 0 )
  {
    v5 = v13;
  }
  else
  {
    *a2 = v13;
    *a3 = v10;
    v13 = 0LL;
    Pointer = 0;
  }
  if ( v5 )
    HamFreeBuffer(v5);
  return (unsigned int)Pointer;
}
