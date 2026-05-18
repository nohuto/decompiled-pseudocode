/*
 * XREFs of sub_18000D534 @ 0x18000D534
 * Callers:
 *     sub_18001D748 @ 0x18001D748 (sub_18001D748.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_18001D848 @ 0x18001D848 (sub_18001D848.c)
 *     sub_180075B8C @ 0x180075B8C (sub_180075B8C.c)
 *     sub_1800923D0 @ 0x1800923D0 (sub_1800923D0.c)
 *     sub_18009CDE4 @ 0x18009CDE4 (sub_18009CDE4.c)
 *     sub_18009CECC @ 0x18009CECC (sub_18009CECC.c)
 *     sub_18009EA4C @ 0x18009EA4C (sub_18009EA4C.c)
 *     sub_18009EAF0 @ 0x18009EAF0 (sub_18009EAF0.c)
 *     sub_18009EBD8 @ 0x18009EBD8 (sub_18009EBD8.c)
 *     sub_18009EC54 @ 0x18009EC54 (sub_18009EC54.c)
 *     sub_18009F158 @ 0x18009F158 (sub_18009F158.c)
 *     sub_1800A6608 @ 0x1800A6608 (sub_1800A6608.c)
 *     sub_1800A6800 @ 0x1800A6800 (sub_1800A6800.c)
 *     sub_1800A687C @ 0x1800A687C (sub_1800A687C.c)
 *     sub_1800A6A74 @ 0x1800A6A74 (sub_1800A6A74.c)
 *     sub_1800A6B44 @ 0x1800A6B44 (sub_1800A6B44.c)
 *     sub_1800A8988 @ 0x1800A8988 (sub_1800A8988.c)
 *     sub_1800A8AAC @ 0x1800A8AAC (sub_1800A8AAC.c)
 *     sub_1800CA04C @ 0x1800CA04C (sub_1800CA04C.c)
 * Callees:
 *     sub_18000D5E8 @ 0x18000D5E8 (sub_18000D5E8.c)
 */

void __fastcall sub_18000D534(_DWORD *a1)
{
  EnterCriticalSection(&CriticalSection);
  while ( 1 )
  {
    if ( !*a1 )
    {
      *a1 = -1;
      goto LABEL_7;
    }
    if ( *a1 != -1 )
      break;
    sub_18000D5E8();
  }
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex) + 16LL) = dword_1801C7BD0;
LABEL_7:
  LeaveCriticalSection(&CriticalSection);
}
