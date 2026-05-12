/*
 * XREFs of sub_14008D1F0 @ 0x14008D1F0
 * Callers:
 *     sub_140034798 @ 0x140034798 (sub_140034798.c)
 *     sub_140065B88 @ 0x140065B88 (sub_140065B88.c)
 *     sub_14007B8DC @ 0x14007B8DC (sub_14007B8DC.c)
 *     sub_14007BE40 @ 0x14007BE40 (sub_14007BE40.c)
 *     sub_14007C48C @ 0x14007C48C (sub_14007C48C.c)
 *     sub_14007CA18 @ 0x14007CA18 (sub_14007CA18.c)
 *     sub_14007D030 @ 0x14007D030 (sub_14007D030.c)
 *     sub_14007D5A8 @ 0x14007D5A8 (sub_14007D5A8.c)
 *     sub_14007E56C @ 0x14007E56C (sub_14007E56C.c)
 *     sub_14007EAC0 @ 0x14007EAC0 (sub_14007EAC0.c)
 *     sub_14007F0A4 @ 0x14007F0A4 (sub_14007F0A4.c)
 *     sub_14007F650 @ 0x14007F650 (sub_14007F650.c)
 *     sub_14007FBF0 @ 0x14007FBF0 (sub_14007FBF0.c)
 *     sub_14008017C @ 0x14008017C (sub_14008017C.c)
 *     sub_1400806F4 @ 0x1400806F4 (sub_1400806F4.c)
 *     sub_140080D4C @ 0x140080D4C (sub_140080D4C.c)
 *     sub_1400812FC @ 0x1400812FC (sub_1400812FC.c)
 *     sub_14008191C @ 0x14008191C (sub_14008191C.c)
 *     sub_140081EB8 @ 0x140081EB8 (sub_140081EB8.c)
 *     sub_140082EB4 @ 0x140082EB4 (sub_140082EB4.c)
 *     sub_140083424 @ 0x140083424 (sub_140083424.c)
 *     sub_140083A3C @ 0x140083A3C (sub_140083A3C.c)
 *     sub_140084010 @ 0x140084010 (sub_140084010.c)
 *     sub_1400845D8 @ 0x1400845D8 (sub_1400845D8.c)
 *     sub_14008CA58 @ 0x14008CA58 (sub_14008CA58.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_14006FED8 @ 0x14006FED8 (sub_14006FED8.c)
 *     sub_1400870F8 @ 0x1400870F8 (sub_1400870F8.c)
 *     sub_140134E5C @ 0x140134E5C (sub_140134E5C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14008D1F0(int *a1, _BYTE *a2)
{
  int v2; // eax
  char v3; // r13
  int *v4; // rsi
  void *v7; // rbp
  _WORD *v8; // rbx
  int *v9; // r14
  __int64 v10; // r15
  int v11; // edi
  unsigned int v12; // ecx
  char v14; // [rsp+D0h] [rbp-88h]
  __int128 v15; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v16; // [rsp+100h] [rbp-58h] BYREF

  v2 = *a1;
  v3 = 0;
  v4 = 0LL;
  v14 = 0;
  v16 = 0LL;
  v15 = 0LL;
  if ( v2 == 1431193940 )
  {
    v4 = a1;
    if ( (*((_BYTE *)a1 + 507) & 0x40) == 0 )
    {
      v7 = (void *)*((_QWORD *)a1 + 448);
      v8 = (_WORD *)*((_QWORD *)a1 + 449);
      v9 = (int *)*((_QWORD *)a1 + 3);
      goto LABEL_7;
    }
    return (unsigned int)-1073741637;
  }
  if ( v2 != 1094997074 )
    return (unsigned int)-1073741637;
  v9 = a1;
  if ( (*((_BYTE *)a1 + 111) & 0x10) != 0 )
    return (unsigned int)-1073741637;
  v7 = (void *)*((_QWORD *)a1 + 757);
  v8 = (_WORD *)*((_QWORD *)a1 + 758);
LABEL_7:
  v10 = *((_QWORD *)a1 + 1);
  if ( !v7 )
  {
    v7 = (void *)sub_1400143E0(256LL, 6240LL, 1129603410LL, *((_QWORD *)a1 + 1));
    if ( !v7 )
      return (unsigned int)-1073741801;
    v14 = 1;
  }
  memset_0(v7, 0, 0x1860uLL);
  if ( v8 )
    goto LABEL_15;
  v8 = (_WORD *)sub_1400143E0(256LL, 168LL, 1129603410LL, v10);
  if ( v8 )
  {
    v3 = 1;
LABEL_15:
    memset_0(v8, 0, 0xA8uLL);
    v11 = sub_140134E5C(a1, v7, v8);
    if ( v11 >= 0 )
    {
      if ( *(_DWORD *)v8 == 512
        && *((_BYTE *)v8 + 52)
        && *((_BYTE *)v8 + 64)
        && *((_BYTE *)v8 + 121)
        && (v12 = *((_DWORD *)v8 + 18), *((_DWORD *)v8 + 32) >= v12)
        && *((_BYTE *)v8 + 148)
        && !*((_BYTE *)v8 + 126)
        && !*((_BYTE *)v8 + 127)
        && !(*((_DWORD *)v8 + 35) % *((_DWORD *)v8 + 36))
        && (unsigned __int16)v8[68] >= v12 )
      {
        if ( v4 )
        {
          if ( !*((_QWORD *)v4 + 448) )
            *((_QWORD *)v4 + 448) = v7;
          if ( !*((_QWORD *)v4 + 449) )
            *((_QWORD *)v4 + 449) = v8;
        }
        else
        {
          if ( !*((_QWORD *)v9 + 757) )
            *((_QWORD *)v9 + 757) = v7;
          if ( !*((_QWORD *)v9 + 758) )
            *((_QWORD *)v9 + 758) = v8;
        }
        v7 = 0LL;
        v8 = 0LL;
      }
      else
      {
        if ( v4 )
          *((_BYTE *)v4 + 507) |= 0x40u;
        else
          *((_BYTE *)v9 + 111) |= 0x10u;
        sub_1400403EC(*((_QWORD *)v9 + 2), (__int64)&v15);
        if ( (byte_1401694F7 & 2) != 0 )
        {
          if ( v4 )
            sub_1400870F8(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              *((_BYTE *)v4 + 104),
              *((_BYTE *)v4 + 105),
              *((_BYTE *)v4 + 106),
              (__int64)(v4 + 526),
              (__int64)(v9 + 1266),
              *((const wchar_t **)&v15 + 1),
              (const char *)v4 + 168,
              (const char *)v4 + 177,
              (const char *)v4 + 242,
              *((const wchar_t **)v9 + 635),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
          else
            sub_1400870F8(
              *((unsigned __int8 *)v8 + 148),
              *((unsigned __int8 *)v8 + 121),
              *((unsigned __int8 *)v8 + 64),
              v9[14],
              255,
              255,
              255,
              (__int64)&v16,
              (__int64)(v9 + 1266),
              *((const wchar_t **)&v15 + 1),
              byte_1401489C4,
              byte_1401489C4,
              byte_1401489C4,
              *((const wchar_t **)v9 + 635),
              *v8,
              *((_BYTE *)v8 + 52),
              *((_BYTE *)v8 + 64),
              *((_BYTE *)v8 + 121),
              *((_DWORD *)v8 + 32),
              *((_DWORD *)v8 + 18),
              *((_BYTE *)v8 + 148),
              *((_BYTE *)v8 + 126),
              *((_BYTE *)v8 + 127),
              *((_DWORD *)v8 + 35),
              *((_DWORD *)v8 + 36),
              v8[68]);
        }
        v11 = -1073741637;
      }
    }
    else
    {
      sub_14006FED8(a2, 32LL, (__int64)"TcglibDiscoverDevice");
    }
    if ( v3 && v8 )
      ExFreePoolWithTag(v8, 0x43546152u);
    goto LABEL_48;
  }
  v11 = -1073741801;
LABEL_48:
  if ( v14 && v7 )
    ExFreePoolWithTag(v7, 0x43546152u);
  return (unsigned int)v11;
}
