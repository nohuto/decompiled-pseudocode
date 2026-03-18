/*
 * XREFs of ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1401D33F0
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x14015BAE4 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 * Callees:
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x14019A6F0 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     ?Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z @ 0x1401D44D8 (-Create@CPointerHashTable@NSInstrumentation@@SAPEAV12@_N@Z.c)
 */

struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::CreateGeneralTrackingAllocator(
        struct NSInstrumentation::CLeakTrackingAllocator *this)
{
  struct NSInstrumentation::CPointerHashTable *v2; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 144) = 0;
  *(_DWORD *)this = 1;
  v2 = NSInstrumentation::CPointerHashTable::Create(0);
  *((_QWORD *)this + 1) = v2;
  if ( v2 )
    return this;
  NSInstrumentation::CLeakTrackingAllocator::Destroy(this);
  return 0LL;
}
