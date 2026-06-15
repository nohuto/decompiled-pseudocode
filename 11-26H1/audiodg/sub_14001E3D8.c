/*
 * XREFs of sub_14001E3D8 @ 0x14001E3D8
 * Callers:
 *     sub_14005ABA8 @ 0x14005ABA8 (sub_14005ABA8.c)
 *     sub_140072BD0 @ 0x140072BD0 (sub_140072BD0.c)
 * Callees:
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_14001EB30 @ 0x14001EB30 (sub_14001EB30.c)
 *     sub_1400382A0 @ 0x1400382A0 (sub_1400382A0.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

void __fastcall sub_14001E3D8(LPCWSTR lptstrFilename, _QWORD *a2)
{
  DWORD FileVersionInfoSizeW; // eax
  DWORD v5; // esi
  void *v6; // rax
  void *v7; // rbx
  void *v8; // rax
  int v9; // [rsp+20h] [rbp-99h]
  int v10; // [rsp+28h] [rbp-91h]
  int v11; // [rsp+30h] [rbp-89h]
  unsigned int puLen; // [rsp+40h] [rbp-79h] BYREF
  void *v13; // [rsp+48h] [rbp-71h] BYREF
  LPVOID lpBuffer; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v15[128]; // [rsp+60h] [rbp-59h] BYREF

  if ( lptstrFilename )
  {
    FileVersionInfoSizeW = GetFileVersionInfoSizeW(lptstrFilename, 0LL);
    v5 = FileVersionInfoSizeW;
    if ( FileVersionInfoSizeW )
    {
      v6 = (void *)sub_1400499B8(FileVersionInfoSizeW, &unk_1400C75FC);
      v7 = v6;
      if ( v6 )
      {
        memset(v6, 0, v5);
        if ( GetFileVersionInfoW(lptstrFilename, 0, v5, v7) )
        {
          lpBuffer = 0LL;
          puLen = 0;
          if ( VerQueryValueW(v7, L"\\", &lpBuffer, &puLen) )
          {
            if ( puLen )
            {
              memset(v15, 0, sizeof(v15));
              v11 = *((unsigned __int16 *)lpBuffer + 6);
              v10 = *((unsigned __int16 *)lpBuffer + 7);
              v9 = *((unsigned __int16 *)lpBuffer + 4);
              if ( (int)sub_14001EB30(v15, 64LL, L"%d.%d.%d.%d", *((unsigned __int16 *)lpBuffer + 5), v9, v10, v11) >= 0 )
              {
                sub_1400382A0(&v13, v15);
                v8 = v13;
                if ( v13 )
                {
                  v13 = 0LL;
                  *a2 = v8;
                }
                sub_14001D96C(&v13);
              }
            }
          }
        }
        j_j__o_free(v7, 1LL);
      }
    }
  }
}
