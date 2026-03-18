/*
 * XREFs of XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x140047D28
 * Callers:
 *     XilEndpoint_FetchStreamContextArray @ 0x14001D444 (XilEndpoint_FetchStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_ddL @ 0x1400274BC (WPP_RECORDER_SF_ddL.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     memmove @ 0x140059540 (memmove.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToGetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  __int64 v5; // rdi
  size_t v7; // rbp
  __int64 v9; // r13
  unsigned int v10; // ebx
  int *Pool2; // rsi
  int v12; // ebx
  unsigned __int16 v13; // r9
  int v15; // [rsp+28h] [rbp-90h]
  int v16; // [rsp+30h] [rbp-88h]
  __int64 v17; // [rsp+40h] [rbp-78h] BYREF
  __int128 v18; // [rsp+48h] [rbp-70h]
  __int64 v19; // [rsp+58h] [rbp-60h]
  __int64 v20; // [rsp+60h] [rbp-58h]
  int v21; // [rsp+68h] [rbp-50h]
  unsigned int v22; // [rsp+6Ch] [rbp-4Ch]

  v5 = *(_QWORD *)(a1 + 32);
  v7 = 16LL * a4;
  v9 = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
  if ( v7 > 0xFFFFFFFF || (v10 = v7 + 4, (int)v7 + 4 < (unsigned int)v7) )
    v10 = 0;
  Pool2 = (int *)ExAllocatePool2(64LL, v10, 1229146200LL);
  if ( Pool2 )
  {
    v17 = 0LL;
    v20 = 36LL;
    v19 = a2;
    v21 = 0;
    v22 = a4;
    v18 = 0LL;
    v12 = SecureChannel_SendRequestSynchronously(v9, (GUID *)&v17, 48, (__int64)Pool2, v10);
    if ( v12 >= 0 )
    {
      v12 = *Pool2;
      if ( *Pool2 >= 0 )
      {
        memmove(a5, Pool2 + 1, v7);
        v12 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 23;
        v16 = *(_DWORD *)(v5 + 152);
        v15 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 22;
      v16 = *(_DWORD *)(v5 + 152);
      v15 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL);
LABEL_11:
      WPP_RECORDER_SF_DD(
        *(_QWORD *)(v5 + 80),
        2u,
        0xDu,
        v13,
        (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
        v15,
        v16);
    }
LABEL_16:
    ExFreePoolWithTag(Pool2, 0x49434858u);
    return (unsigned int)v12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      0x15u,
      (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 143LL),
      *(_DWORD *)(v5 + 152),
      v10);
  return (unsigned int)-1073741670;
}
