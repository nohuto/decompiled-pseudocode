/*
 * XREFs of ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800AAB30
 * Callers:
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800935A8 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?LoadPenResources@CContactManager@@AEAAXXZ @ 0x1800AABDC (-LoadPenResources@CContactManager@@AEAAXXZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057C00 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180094280 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

char *__fastcall CContactManager::LoadFeedbackString(CContactManager *this, HINSTANCE a2, UINT a3, int *a4)
{
  char *v5; // rbx
  int StringW; // eax
  __int64 v7; // rdi
  char *v8; // rax
  WCHAR Buffer[264]; // [rsp+20h] [rbp-238h] BYREF

  v5 = 0LL;
  StringW = LoadStringW(a2, a3, Buffer, 260);
  if ( StringW > 0 && (unsigned int)StringW < 0x104 )
  {
    *a4 = StringW;
    v7 = StringW + 1;
    v8 = (char *)DefaultHeap::Alloc(2 * v7);
    v5 = v8;
    if ( v8 )
    {
      if ( (int)StringCchCopyW(v8, v7, (char *)Buffer) < 0 )
      {
        DefaultHeap::Free(v5);
        v5 = 0LL;
        *a4 = 0;
      }
    }
  }
  return v5;
}
