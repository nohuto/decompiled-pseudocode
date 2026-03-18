/*
 * XREFs of XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x140047B0C
 * Callers:
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036890 (XilEndpoint_AllocateStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x140006A74 (WPP_RECORDER_SF_DD.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToAllocateSecureStreamContextArray(
        _QWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  unsigned __int16 v11; // r9
  int v13; // [rsp+28h] [rbp-41h]
  int v14; // [rsp+30h] [rbp-39h]
  __int128 v15; // [rsp+40h] [rbp-29h] BYREF
  __int64 v16; // [rsp+50h] [rbp-19h]
  GUID v17[2]; // [rsp+58h] [rbp-11h] BYREF
  __int128 v18; // [rsp+78h] [rbp+Fh]
  __int64 v19; // [rsp+88h] [rbp+1Fh]

  LODWORD(v16) = 0;
  v4 = a1[4];
  v15 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)v4 + 112LL);
  v18 = 0LL;
  v19 = a2;
  *((_QWORD *)&v18 + 1) = *a1;
  memset(v17, 0, sizeof(v17));
  LODWORD(v18) = 35;
  v9 = SecureChannel_SendRequestSynchronously(v8, v17, 56, (__int64)&v15, 24);
  if ( v9 >= 0 )
  {
    v9 = v15;
    if ( (int)v15 >= 0 )
    {
      v9 = 0;
      *a3 = *((_QWORD *)&v15 + 1);
      *a4 = v16;
      return (unsigned int)v9;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = a1[4];
      v11 = 13;
      v14 = *(_DWORD *)(v10 + 152);
      v13 = *(unsigned __int8 *)(*(_QWORD *)(v10 + 16) + 143LL);
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = a1[4];
    v11 = 12;
    v14 = *(_DWORD *)(v10 + 152);
    v13 = *(unsigned __int8 *)(*(_QWORD *)(v10 + 16) + 143LL);
LABEL_4:
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(v10 + 80),
      2u,
      0xDu,
      v11,
      (__int64)&WPP_0fad196ed6f839af1910845e6c92cab5_Traceguids,
      v13,
      v14);
  }
  return (unsigned int)v9;
}
