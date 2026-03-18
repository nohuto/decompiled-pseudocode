/*
 * XREFs of ?Grow@?$CDynamicArray@I$0HHHAHDFF@@@IEAAJI@Z @ 0x140241FD0
 * Callers:
 *     ?CapturePointer@CInteractionMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I@Z @ 0x140241F7C (-CapturePointer@CInteractionMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x140137620 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CDynamicArray<unsigned int,2003858261>::Grow(__int64 a1)
{
  unsigned int v2; // esi
  int v3; // ebx
  void *v4; // rax
  void *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 8) + 1;
  if ( *(_DWORD *)(a1 + 8) == -1 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v3 = 0;
    if ( v2 > *(_DWORD *)(a1 + 12) )
    {
      v10 = 0LL;
      v3 = RtlULongLongMult(v2, 4uLL, &v10);
      if ( v3 >= 0 )
      {
        v4 = (void *)Win32AllocPoolImpl(256LL, v10, 0x77707355u);
        v5 = v4;
        if ( v4 )
        {
          if ( *(_QWORD *)a1 )
          {
            memmove(v4, *(const void **)a1, 4LL * *(unsigned int *)(a1 + 8));
            GreDeleteFastMutex(*(char **)a1, v6, v7, v8);
          }
          *(_QWORD *)a1 = v5;
          *(_DWORD *)(a1 + 12) = v2;
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v3;
}
