/*
 * XREFs of ?DetachInputQueue@CInputQueueProp@@QEAAXPEAVIInputQueue@@@Z @ 0x140206324
 * Callers:
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1402062BC (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall CInputQueueProp::DetachInputQueue(CInputQueueProp *this, struct IInputQueue *a2, __int64 a3)
{
  struct IInputQueue *v4; // r11
  unsigned int v5; // ecx
  __int64 i; // r9
  __int64 v7; // rcx

  v4 = a2;
  v5 = *((_DWORD *)this + 8);
  for ( i = 0LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    if ( a2 == *(struct IInputQueue **)(*((_QWORD *)this + 3) + 8 * i) )
    {
      *((_DWORD *)this + 8) = v5 - 1;
      if ( (unsigned int)i < v5 - 1 )
      {
        do
        {
          a2 = (struct IInputQueue *)*((_QWORD *)this + 3);
          a3 = (unsigned int)(i + 1);
          v7 = (unsigned int)i;
          i = a3;
          *((_QWORD *)a2 + v7) = *((_QWORD *)a2 + a3);
        }
        while ( (unsigned int)a3 < *((_DWORD *)this + 8) );
      }
      break;
    }
  }
  (*(void (__fastcall **)(struct IInputQueue *, struct IInputQueue *, __int64, __int64))(*(_QWORD *)v4 + 8LL))(
    v4,
    a2,
    a3,
    i);
}
