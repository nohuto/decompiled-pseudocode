/*
 * XREFs of StorLogMFNDNSPageMapControl @ 0x14006E734
 * Callers:
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x14006324C (RaidAdapterMFNDNameSpacePageMapControl.c)
 * Callees:
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     McTemplateK0qjzszhhssqqqquuq_EtwWriteTransfer @ 0x14005DF64 (McTemplateK0qjzszhhssqqqquuq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int16 __fastcall StorLogMFNDNSPageMapControl(__int64 a1, char a2, char a3, unsigned __int16 a4, int a5)
{
  __int128 v9; // xmm0
  __int64 v10; // rcx
  int v11; // eax
  __int16 *v12; // r11
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // edx
  __int16 v16; // r9
  __int16 v17; // r10
  const wchar_t *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // edx
  __int16 v22; // r9
  __int16 v23; // r10
  const wchar_t *v24; // rcx
  __int128 v26; // [rsp+A0h] [rbp-80h] BYREF
  __int128 v27; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-60h] BYREF
  char v29; // [rsp+C8h] [rbp-58h]
  __int128 v30; // [rsp+D0h] [rbp-50h] BYREF
  int v31; // [rsp+E0h] [rbp-40h]
  char v32; // [rsp+E4h] [rbp-3Ch]
  __int128 v33; // [rsp+E8h] [rbp-38h] BYREF
  __int128 v34; // [rsp+F8h] [rbp-28h]
  __int64 v35; // [rsp+108h] [rbp-18h]
  char v36; // [rsp+110h] [rbp-10h]

  if ( StorEtwLoggingEnabled )
  {
    v31 = 0;
    v26 = 0LL;
    v32 = 0;
    v33 = 0LL;
    v35 = 0LL;
    v34 = 0LL;
    v36 = 0;
    v9 = *(_OWORD *)(a1 + 5128);
    v10 = *(_QWORD *)(a1 + 16);
    v28 = 0LL;
    v27 = v9;
    v29 = 0;
    v30 = 0LL;
    LOWORD(v11) = RaidDriverGetName(v10, (__int64)&v26);
    v12 = *(__int16 **)(a1 + 6064);
    if ( v12 )
    {
      v33 = *(_OWORD *)(v12 + 12);
      v34 = *(_OWORD *)(v12 + 20);
      v35 = *((_QWORD *)v12 + 7);
      v28 = *((_QWORD *)v12 + 8);
      v30 = *(_OWORD *)(v12 + 2);
      v11 = *((_DWORD *)v12 + 5);
      v31 = v11;
    }
    if ( a5 >= 0 )
    {
      if ( (byte_140173447 & 4) != 0 )
      {
        v19 = *(_QWORD *)(a1 + 6224);
        if ( v19 )
        {
          v20 = *(unsigned int *)(v19 + 32);
          v21 = *(_DWORD *)(v19 + 36);
        }
        else
        {
          LOBYTE(v21) = -1;
          v20 = 0xFFFFFFFFLL;
        }
        if ( v12 )
        {
          v22 = v12[1];
          v23 = *v12;
        }
        else
        {
          LOBYTE(v22) = 0;
          LOBYTE(v23) = 0;
        }
        if ( !v19 || (v24 = *(const wchar_t **)(v19 + 24)) == 0LL )
          v24 = (const wchar_t *)&unk_140153274;
        LOWORD(v11) = McTemplateK0qjzszhhssqqqquuq_EtwWriteTransfer(
                        (__int64)v24,
                        &EventMFNDNameSpacePageMapControlSuccess,
                        v20,
                        *(_DWORD *)(a1 + 56),
                        (__int64)&v27,
                        *((const wchar_t **)&v26 + 1),
                        (const char *)&v30,
                        v24,
                        v23,
                        v22,
                        (const char *)&v33,
                        (const char *)&v28,
                        v21,
                        v20,
                        a2,
                        a3,
                        a4 >> 1,
                        (a4 >> 9) & 7,
                        a5);
      }
    }
    else if ( (byte_140173449 & 2) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 6224);
      if ( v13 )
      {
        v14 = *(unsigned int *)(v13 + 32);
        v15 = *(_DWORD *)(v13 + 36);
      }
      else
      {
        LOBYTE(v15) = -1;
        v14 = 0xFFFFFFFFLL;
      }
      if ( v12 )
      {
        v16 = v12[1];
        v17 = *v12;
      }
      else
      {
        LOBYTE(v16) = 0;
        LOBYTE(v17) = 0;
      }
      if ( !v13 || (v18 = *(const wchar_t **)(v13 + 24)) == 0LL )
        v18 = (const wchar_t *)&unk_140153274;
      LOWORD(v11) = McTemplateK0qjzszhhssqqqquuq_EtwWriteTransfer(
                      (__int64)v18,
                      &EventMFNDNameSpacePageMapControlFailure,
                      v14,
                      *(_DWORD *)(a1 + 56),
                      (__int64)&v27,
                      *((const wchar_t **)&v26 + 1),
                      (const char *)&v30,
                      v18,
                      v17,
                      v16,
                      (const char *)&v33,
                      (const char *)&v28,
                      v15,
                      v14,
                      a2,
                      a3,
                      a4 >> 1,
                      (a4 >> 9) & 7,
                      a5);
    }
  }
  return v11;
}
