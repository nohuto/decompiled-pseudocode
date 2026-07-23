/*
 * XREFs of PopGetCallerContextFromBuffer @ 0x140ABDDA8
 * Callers:
 *     PopDiagTracePowerRequestCreate @ 0x140AC2C4C (PopDiagTracePowerRequestCreate.c)
 *     PopQueryMostRecentWakeSourceInfo @ 0x140B65720 (PopQueryMostRecentWakeSourceInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringPrintf @ 0x1404B3820 (RtlUnicodeStringPrintf.c)
 */

void __fastcall PopGetCallerContextFromBuffer(__int64 a1, UNICODE_STRING *a2, __int64 a3, UNICODE_STRING *a4)
{
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // r10
  __int64 v9; // r9
  _WORD *v10; // r10
  __int64 v11; // r11
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 v14; // r9
  _WORD *v15; // rcx
  __int64 v16; // r8
  _WORD *i; // rcx
  __int16 v18; // ax
  __int16 v19; // cx
  unsigned __int16 v20; // ax

  *(_OWORD *)a3 = 0LL;
  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_DWORD *)(a1 + 8);
    v8 = v6 + a1;
    if ( v7 )
    {
      v9 = v8 & -(__int64)(v6 != 0);
      if ( v9 )
      {
        v10 = (_WORD *)(v8 & -(__int64)(v6 != 0));
        v11 = 0x7FFFLL;
        while ( *v10 )
        {
          ++v10;
          if ( !--v11 )
            goto LABEL_7;
        }
        if ( a3 )
        {
          v18 = 2 * (0x7FFF - v11);
          *(_QWORD *)(a3 + 8) = v9;
          *(_WORD *)a3 = v18;
          *(_WORD *)(a3 + 2) = v18 + 2;
        }
      }
LABEL_7:
      if ( v7 == 2 )
      {
        RtlUnicodeStringPrintf(a2, L"%d", *(unsigned int *)(a1 + 28));
        *a4 = *a2;
      }
      else
      {
        RtlInitUnicodeString(a4, 0LL);
      }
    }
    else
    {
      v12 = v8 & -(__int64)(v6 != 0);
      v13 = (*(_QWORD *)(a1 + 24) + a1) & -(__int64)(*(_QWORD *)(a1 + 24) != 0LL);
      if ( v12 )
      {
        v14 = 0x7FFFLL;
        v15 = (_WORD *)v12;
        while ( *v15 )
        {
          ++v15;
          if ( !--v14 )
            goto LABEL_14;
        }
        if ( a3 )
        {
          v19 = 2 * (0x7FFF - v14);
          *(_QWORD *)(a3 + 8) = v12;
          *(_WORD *)a3 = v19;
          *(_WORD *)(a3 + 2) = v19 + 2;
        }
      }
LABEL_14:
      *a4 = 0LL;
      if ( v13 )
      {
        v16 = 0x7FFFLL;
        for ( i = (_WORD *)v13; *i; ++i )
        {
          if ( !--v16 )
            return;
        }
        if ( a4 )
        {
          v20 = 2 * (0x7FFF - v16);
          a4->Buffer = (wchar_t *)v13;
          a4->Length = v20;
          a4->MaximumLength = v20 + 2;
        }
      }
    }
  }
  else
  {
    *a4 = 0LL;
  }
}
