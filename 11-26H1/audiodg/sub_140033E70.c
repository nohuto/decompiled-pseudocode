/*
 * XREFs of sub_140033E70 @ 0x140033E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140023578 @ 0x140023578 (sub_140023578.c)
 *     sub_14003412C @ 0x14003412C (sub_14003412C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14004A6F4 @ 0x14004A6F4 (sub_14004A6F4.c)
 */

void sub_140033E70(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v6; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  _DWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // rax
  __int64 v23; // r8
  __int64 v24; // r9
  _WORD *v25; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v26[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h]
  __int128 v28; // [rsp+48h] [rbp-B8h]
  __int128 v29; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int16 *v30; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+70h] [rbp-90h]
  int v32; // [rsp+74h] [rbp-8Ch]
  void *v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+84h] [rbp-7Ch]
  _WORD *v36; // [rsp+88h] [rbp-78h]
  int v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+94h] [rbp-6Ch]
  _WORD v39[1024]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v41; // [rsp+8E8h] [rbp+7E8h] BYREF
  va_list va; // [rsp+8E8h] [rbp+7E8h]
  va_list va1; // [rsp+8F0h] [rbp+7F0h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v41 = va_arg(va1, _QWORD);
  if ( a3 && a2 <= 5 )
  {
    v28 = *(_OWORD *)(a1 + 24);
    v29 = v28;
    EtwEventActivityIdControl(4LL, &v29);
    memset(v39, 0, sizeof(v39));
    v25 = 0LL;
    if ( (unsigned int)sub_14004A6F4(v39, 1023LL, a3, (__int64 *)va) > 0x3FE )
      v39[1023] = 0;
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 == 1 )
              {
                v10 = (_DWORD *)sub_14003412C();
                if ( *v10 > 5u )
                {
                  v25 = v39;
                  sub_140023578((int)v10, (int)&unk_1400D18FE, v11, v12, (void **)&v25);
                }
              }
            }
            else
            {
              v8 = sub_14003412C();
              if ( *(_DWORD *)v8 > 4u )
              {
                v9 = -1LL;
                do
                  ++v9;
                while ( v39[v9] );
                v38 = 0;
                v37 = 2 * v9 + 2;
                v26[1] = 4;
                v30 = *(unsigned __int16 **)(v8 + 8);
                v36 = v39;
                v26[0] = 184549376;
                v27 = 0LL;
                v31 = *v30;
                v33 = &unk_1400D18EB;
                v32 = 2;
                v34 = 18;
                v35 = 1;
                ((void (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
                  *(_QWORD *)(v8 + 32),
                  v26,
                  0LL,
                  0LL,
                  3,
                  &v30,
                  (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550);
              }
            }
          }
          else
          {
            v13 = (_DWORD *)sub_14003412C();
            if ( *v13 > 3u )
            {
              v25 = v39;
              sub_140023578((int)v13, (int)&unk_1400D18A4, v14, v15, (void **)&v25);
            }
          }
        }
        else
        {
          v16 = (_DWORD *)sub_14003412C();
          if ( *v16 > 2u )
          {
            v25 = v39;
            sub_140023578((int)v16, (int)&unk_1400D18C2, v17, v18, (void **)&v25);
          }
        }
      }
      else
      {
        v19 = (_DWORD *)sub_14003412C();
        if ( *v19 > 1u )
        {
          v25 = v39;
          sub_140023578((int)v19, (int)&unk_1400D191C, v20, v21, (void **)&v25);
        }
      }
    }
    else
    {
      v22 = (_DWORD *)sub_14003412C();
      if ( *v22 )
      {
        v25 = v39;
        sub_140023578((int)v22, (int)&unk_1400D1886, v23, v24, (void **)&v25);
      }
    }
    EtwEventActivityIdControl(4LL, &v29);
  }
}
