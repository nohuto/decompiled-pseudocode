/*
 * XREFs of ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1401BEFD8
 * Callers:
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

struct _LARGE_UNICODE_STRING *__fastcall tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
        tagWND::ProtectedLargeUnicodeStringWNDstrName *this,
        struct _LARGE_UNICODE_STRING *a2)
{
  int v2; // r9d

  *((_QWORD *)a2 + 1) = *(_QWORD *)this;
  *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)this - 18) + 184LL);
  v2 = *(_DWORD *)(*((_QWORD *)this - 18) + 188LL);
  *((_DWORD *)a2 + 1) ^= (*((_DWORD *)a2 + 1) ^ v2) & 0x7FFFFFFF;
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*((_QWORD *)this - 18) + 188LL) ^ (v2 ^ *(_DWORD *)(*((_QWORD *)this - 18) + 188LL)) & 0x7FFFFFFF;
  return a2;
}
