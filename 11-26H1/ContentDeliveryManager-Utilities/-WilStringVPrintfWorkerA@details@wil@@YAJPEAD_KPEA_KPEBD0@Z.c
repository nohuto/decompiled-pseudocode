/*
 * XREFs of ?WilStringVPrintfWorkerA@details@wil@@YAJPEAD_KPEA_KPEBD0@Z @ 0x18003D310
 * Callers:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18003BC58 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::WilStringVPrintfWorkerA(
        wil::details *this,
        char *a2,
        __int64 a3,
        const char *a4,
        va_list ArgList)
{
  char *v5; // rdi
  unsigned int v7; // ebx
  int v8; // eax

  v5 = a2 - 1;
  v7 = 0;
  v8 = _vsnprintf_s((char *const)this, (const size_t)a2, (const size_t)(a2 - 1), a4, ArgList);
  if ( v8 < 0 || v8 > (unsigned __int64)v5 )
  {
    *((_BYTE *)this + (_QWORD)v5) = 0;
    return (unsigned int)-2147024774;
  }
  else if ( (char *)v8 == v5 )
  {
    *((_BYTE *)this + (_QWORD)v5) = 0;
  }
  return v7;
}
