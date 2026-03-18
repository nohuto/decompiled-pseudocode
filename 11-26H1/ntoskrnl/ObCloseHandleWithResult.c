/*
 * XREFs of ObCloseHandleWithResult @ 0x1407C3270
 * Callers:
 *     <none>
 * Callees:
 *     ObpIsKernelHandle @ 0x1404444A0 (ObpIsKernelHandle.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ObpCloseHandle @ 0x1408F9C70 (ObpCloseHandle.c)
 *     VfCheckUserHandle @ 0x140C47C38 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObCloseHandleWithResult(ULONG_PTR BugCheckParameter1, char a2, unsigned int a3, volatile void *a4)
{
  SIZE_T v5; // rdi
  ULONG_PTR v8; // rcx
  size_t v9; // rsi
  __int64 *p_Src; // rdi
  int v11; // ebx
  __int64 Src; // [rsp+48h] [rbp-40h] BYREF
  int v14; // [rsp+50h] [rbp-38h]

  v5 = a3;
  Src = 0LL;
  v14 = 0;
  if ( (MmVerifierData & 0x100) != 0 && !a2 && !ObpIsKernelHandle(BugCheckParameter1, 0) )
    VfCheckUserHandle(v8);
  v9 = v5;
  if ( (unsigned int)v5 > 0xC )
    v9 = 12LL;
  if ( a2 )
  {
    ProbeForRead(a4, v5, 4u);
    p_Src = &Src;
    memmove(&Src, (const void *)a4, v9);
  }
  else
  {
    p_Src = (__int64 *)a4;
  }
  if ( *(_DWORD *)p_Src == 1 )
  {
    if ( (char *)p_Src + 12 <= (char *)p_Src + v9 )
    {
      memset_0((char *)p_Src + 4, 0, v9 - 4);
      v11 = ObpCloseHandle(BugCheckParameter1);
      if ( v11 >= 0 && a2 )
        memmove((void *)a4, p_Src, v9);
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741736;
  }
  return (unsigned int)v11;
}
