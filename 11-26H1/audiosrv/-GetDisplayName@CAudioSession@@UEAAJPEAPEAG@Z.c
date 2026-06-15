/*
 * XREFs of ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180069D60
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioSession::GetDisplayName(struct _RTL_CRITICAL_SECTION *this, unsigned __int16 **a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  int v5; // ecx
  unsigned __int64 v6; // rdi
  unsigned __int16 *v7; // rax
  unsigned __int16 *v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int16 v12; // dx
  unsigned __int16 *v13; // rax
  signed int v14; // eax
  unsigned int v15; // esi

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      10LL,
      &WPP_ee85f21a7da73824226bb42893b0f656_Traceguids,
      *(_QWORD *)&this[6].LockCount);
  }
  v4 = this + 7;
  EnterCriticalSection(this + 7);
  v5 = *(_DWORD *)(*(_QWORD *)&this[6].LockCount - 16LL) + 1;
  v6 = 2LL * v5;
  if ( v6 > 0x40000 )
  {
    *a2 = 0LL;
  }
  else
  {
    v7 = (unsigned __int16 *)operator new[](2LL * v5, (const struct std::nothrow_t *)&std::nothrow);
    *a2 = v7;
    v8 = v7;
    if ( v7 )
    {
      v9 = v6 >> 1;
      if ( v9 && v9 <= 0x7FFFFFFF )
      {
        v10 = 2147483646LL;
        v11 = *(_QWORD *)&this[6].LockCount - (_QWORD)v8;
        do
        {
          if ( !v10 )
            break;
          v12 = *(unsigned __int16 *)((char *)v8 + v11);
          if ( !v12 )
            break;
          *v8 = v12;
          --v10;
          ++v8;
          --v9;
        }
        while ( v9 );
        v13 = v8 - 1;
        if ( v9 )
          v13 = v8;
        *v13 = 0;
        v14 = v9 == 0 ? 0x8007007A : 0;
      }
      else
      {
        v15 = -2147024809;
        v14 = -2147024809;
        if ( v9 )
        {
          *v8 = 0;
LABEL_24:
          operator delete(*a2);
          *a2 = 0LL;
          goto LABEL_25;
        }
      }
      v15 = v14;
      if ( v14 >= 0 )
        goto LABEL_14;
      goto LABEL_24;
    }
  }
  v15 = -2147024882;
LABEL_25:
  AudSrvTraceLoggingErrorHelper("CAudioSession::GetDisplayName", 86, v15);
LABEL_14:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v15;
}
