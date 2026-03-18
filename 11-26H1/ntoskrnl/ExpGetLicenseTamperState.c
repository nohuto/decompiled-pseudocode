/*
 * XREFs of ExpGetLicenseTamperState @ 0x1406CD17C
 * Callers:
 *     ExGetLicenseTamperState @ 0x140837D50 (ExGetLicenseTamperState.c)
 *     ExSetLicenseTamperState @ 0x140837E90 (ExSetLicenseTamperState.c)
 *     sub_140838310 @ 0x140838310 (sub_140838310.c)
 *     sub_140839300 @ 0x140839300 (sub_140839300.c)
 *     sub_140839380 @ 0x140839380 (sub_140839380.c)
 *     SLUpdateLicenseDataInternal @ 0x140839788 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpLicUpdateChecksum @ 0x1406CD2D0 (ExpLicUpdateChecksum.c)
 *     ntoskrnl_20 @ 0x140A7E0D0 (ntoskrnl_20.c)
 *     ntoskrnl_21 @ 0x140A7E380 (ntoskrnl_21.c)
 */

__int64 __fastcall ExpGetLicenseTamperState(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  int updated; // eax
  __int64 v8; // rdx
  __int64 v9; // r9
  unsigned int v10; // r10d
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int128 v13; // [rsp+40h] [rbp-40h]
  __int128 v14; // [rsp+50h] [rbp-30h] BYREF
  __int128 v15; // [rsp+60h] [rbp-20h]
  __int128 v16; // [rsp+70h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  if ( *(_QWORD *)(a1 + 46832) )
  {
    result = ntoskrnl_21(a1, &v14);
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result == -1073741275 )
      {
        v5 = *(_QWORD *)(a1 + 46832);
        v6 = *(unsigned int *)(a1 + 46824);
        HIDWORD(v11) = 0;
        *(_DWORD *)((char *)&v13 + 9) = 0;
        *(_WORD *)((char *)&v13 + 13) = 0;
        HIBYTE(v13) = 0;
        if ( v5 )
        {
          if ( !(_DWORD)v6 || a1 != -24 )
          {
            *(_QWORD *)&v11 = 0LL;
            v12 = 0uLL;
            DWORD2(v11) = 4;
            *(_QWORD *)&v13 = 0LL;
            BYTE8(v13) = 1;
            updated = ExpLicUpdateChecksum(v5 + 20, v6, &v11, a1 + 24);
            v10 = -1;
            if ( updated
              || (_DWORD)v8
              && ((unsigned __int64)(16 * v8) > 0xFFFFFFFF || (unsigned int)ExpLicUpdateChecksum(v9, v8, &v11, v9)) )
            {
              *(_QWORD *)&v11 = 0LL;
              DWORD2(v11) = 4;
            }
            v14 = v11;
            v15 = v12;
            v16 = v13;
            DWORD2(v14) = 4;
            result = ntoskrnl_20(a1, &v14, v10, 0LL);
          }
        }
      }
      *a2 = 4;
    }
    else
    {
      result = DWORD2(v14);
      *a2 = DWORD2(v14);
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 46988);
    *a2 = result;
  }
  return result;
}
