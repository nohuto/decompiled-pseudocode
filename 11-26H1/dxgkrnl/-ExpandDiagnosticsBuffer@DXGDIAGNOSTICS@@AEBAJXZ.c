/*
 * XREFs of ?ExpandDiagnosticsBuffer@DXGDIAGNOSTICS@@AEBAJXZ @ 0x14000BA48
 * Callers:
 *     ?WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x14000BBFC (-WriteDiagnosticEntryInternal@DXGDIAGNOSTICS@@AEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ExpandDiagnosticsBuffer(DXGDIAGNOSTICS *this)
{
  unsigned int v1; // eax
  __int64 result; // rax
  __int64 v4; // r8
  _DWORD *v5; // rsi
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // eax
  _DWORD *v10; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx

  v1 = *((_DWORD *)this + 5);
  if ( v1 == 1 )
    return 128LL;
  v4 = *((_QWORD *)this + 6);
  v5 = (_DWORD *)((char *)this + 16);
  *((_DWORD *)this + 5) = v1 >> 1;
  v6 = (unsigned int)(2 * *((_DWORD *)this + 4));
  v7 = operator new[]((unsigned int)v6, 0x4B677844u, v4);
  v8 = v7;
  if ( v7 )
  {
    memmove(
      (void *)(v7 + *((unsigned int *)this + 8)),
      (const void *)(*((unsigned int *)this + 8) + *((_QWORD *)this + 7)),
      (unsigned int)(*v5 - *((_DWORD *)this + 8)));
    v9 = *((_DWORD *)this + 9);
    if ( v9 >= *((_DWORD *)this + 8) )
    {
      v10 = v5;
    }
    else
    {
      memmove((void *)(v8 + (unsigned int)*v5), *((const void **)this + 7), v9);
      v10 = (_DWORD *)((char *)this + 16);
      *((_DWORD *)this + 9) += *v5;
    }
    v11 = *((_QWORD *)this + 1);
    if ( v11 )
    {
      v12 = *((_QWORD *)this + 7);
      if ( v11 < v12 + (unsigned __int64)*((unsigned int *)this + 8) )
        *((_QWORD *)this + 1) = v8 + v11 + (unsigned int)*v5 - v12;
      else
        *((_QWORD *)this + 1) = v8 + v11 - v12;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 7));
    result = 0LL;
    *((_QWORD *)this + 7) = v8;
    *v10 = v6;
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1719;
    DxgkLogInternalTriageEvent(
      0,
      262145,
      -1,
      (unsigned int)L"Unable to allocate diagnosability buffer for new size 0x%I64x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225626LL;
  }
  return result;
}
