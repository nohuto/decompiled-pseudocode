/*
 * XREFs of StorCompareScsiDeviceId @ 0x14003DD80
 * Callers:
 *     StorCompareScsiIdentity @ 0x14003DBB0 (StorCompareScsiIdentity.c)
 *     ShimGetMsftId @ 0x1400C50C0 (ShimGetMsftId.c)
 * Callees:
 *     StorGetNextVPDIdDescriptor @ 0x14003DFA4 (StorGetNextVPDIdDescriptor.c)
 *     __report_rangecheckfailure @ 0x14005CFD0 (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memcmp @ 0x140138EA0 (memcmp.c)
 */

__int64 __fastcall StorCompareScsiDeviceId(_BYTE *a1, _BYTE *a2)
{
  unsigned __int8 v2; // al
  unsigned int v3; // ebx
  __int64 v6; // rcx
  int v7; // ecx
  unsigned int v8; // ecx
  __int64 NextVPDIdDescriptor; // rax
  unsigned int v10; // r10d
  __int64 v11; // rsi
  _BYTE *v12; // r13
  char v14; // r8
  char v15; // r15
  _BYTE *v16; // rdi
  unsigned int v17; // edx
  int v18; // ecx
  char v19; // dl
  unsigned int v20; // eax
  __int64 v21; // r14
  int v22; // eax
  bool v23; // zf
  char v24; // [rsp+20h] [rbp-50h]
  unsigned int v25; // [rsp+24h] [rbp-4Ch]
  __int128 v26; // [rsp+28h] [rbp-48h] BYREF
  __int64 v27; // [rsp+38h] [rbp-38h]
  _BYTE v28[16]; // [rsp+40h] [rbp-30h]
  _BYTE v29[16]; // [rsp+50h] [rbp-20h]

  v2 = 0;
  v26 = 0LL;
  v27 = 0LL;
  v3 = 0;
  while ( v2 <= 8u )
  {
    v6 = v2;
    if ( v2 >= 9uLL )
      _report_rangecheckfailure(v2, a2, a1);
    v28[v2++] = 0;
    v29[v6] = 0;
  }
  if ( a1[1] == 0x83 )
  {
    v7 = (unsigned __int8)a1[3] | ((unsigned __int8)a1[2] << 8);
    v26 = (unsigned __int64)a1;
    v8 = v7 + 4;
    if ( v8 > 0xFFFF )
      v8 = 0xFFFF;
    LODWORD(v27) = v8;
    while ( 1 )
    {
      NextVPDIdDescriptor = StorGetNextVPDIdDescriptor(&v26);
      v11 = NextVPDIdDescriptor;
      v12 = (_BYTE *)NextVPDIdDescriptor;
      if ( !NextVPDIdDescriptor )
        break;
      v14 = *(_BYTE *)(NextVPDIdDescriptor + 1);
      v24 = v14;
      if ( (v14 & 0x30) == 0 )
      {
        v15 = v14 & 0xF;
        if ( (v14 & 0xFu) <= 8 )
        {
          if ( a2[1] != 0x83 )
            break;
          v16 = 0LL;
          v17 = ((unsigned __int8)a2[3] | ((unsigned __int8)a2[2] << 8)) + 4;
          if ( v17 > v10 )
            v17 = v10;
          v25 = v17;
          while ( 1 )
          {
            v18 = v16 ? (_DWORD)v16 + (unsigned __int8)v16[3] - (_DWORD)a2 + 4 : 4;
            v16 = &a2[v18];
            if ( v18 + 4 > v17 || (unsigned int)(unsigned __int8)v16[3] + v18 + 4 > v17 || !v16 )
              break;
            v19 = v16[1];
            if ( (v19 & 0x30) != 0 || ((*v16 ^ *v12) & 0xF) != 0 )
            {
              v17 = v25;
            }
            else
            {
              v23 = v15 == (v19 & 0xF);
              v17 = v25;
              if ( v23 )
              {
                v20 = *(unsigned __int8 *)(v11 + 3);
                v21 = v14 & 0xF;
                v28[v21] = 1;
                if ( (_BYTE)v20 == v16[3] )
                {
                  v22 = memcmp((const void *)(v11 + 4), v16 + 4, v20);
                  v14 = v24;
                  v17 = v25;
                  if ( !v22 )
                    v29[v21] = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v28[2] || v28[3] || v28[8] )
  {
    if ( !v29[2] && !v29[3] )
    {
      LOBYTE(v3) = v29[8] == 0;
      return v3;
    }
    return 0LL;
  }
  if ( v28[1] )
    return v29[1] == 0;
  if ( v28[0] )
    return v29[0] == 0;
  return 1LL;
}
