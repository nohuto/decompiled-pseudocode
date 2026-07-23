/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1408C6050
 * Callers:
 *     PiDrvDbFindSystemFilePathToken @ 0x1407B8618 (PiDrvDbFindSystemFilePathToken.c)
 *     PiDrvDbRegisterNode @ 0x1407B9BF0 (PiDrvDbRegisterNode.c)
 *     CmpTraceSecurityChanging @ 0x1408C61DC (CmpTraceSecurityChanging.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

PWCHAR __cdecl RtlFindUnicodeSubstring(
        PUNICODE_STRING FullString,
        PUNICODE_STRING SearchString,
        BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v6; // rdx
  char v7; // r8
  size_t v8; // rbp
  struct _LIST_ENTRY *Flink; // r15
  unsigned int Length; // eax
  wchar_t *Buffer; // rbx
  wchar_t *v12; // rsi
  unsigned __int64 v13; // r14
  char *v14; // r11
  unsigned __int16 *v15; // rdi
  unsigned __int16 *v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r9

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v8 = *v6;
  Flink = CurrentServerSiloGlobals[75].Flink;
  Length = FullString->Length;
  if ( (unsigned __int16)Length >= (unsigned __int16)v8 )
  {
    Buffer = FullString->Buffer;
    v12 = (wchar_t *)((char *)Buffer + Length - v8);
    if ( v7 )
    {
      v13 = *((_QWORD *)v6 + 1);
      v14 = (char *)Buffer - v13;
      v15 = (unsigned __int16 *)(v13 + v8);
      while ( Buffer <= v12 )
      {
        v16 = (unsigned __int16 *)*((_QWORD *)v6 + 1);
        if ( v13 < (unsigned __int64)v15 )
        {
          do
          {
            v17 = *(unsigned __int16 *)((char *)v16 + (_QWORD)v14);
            v18 = *v16;
            if ( (_WORD)v17 != (_WORD)v18 )
            {
              if ( (unsigned int)v17 >= 0x61 )
              {
                if ( (unsigned int)v17 > 0x7A )
                {
                  if ( Flink && (unsigned __int16)v17 >= 0xC0u )
                    LOWORD(v17) = *((_WORD *)&Flink->Flink
                                  + (v17 & 0xF)
                                  + *((unsigned __int16 *)&Flink->Flink
                                    + ((unsigned __int8)v17 >> 4)
                                    + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v17 >> 8))))
                                + v17;
                }
                else
                {
                  LOWORD(v17) = v17 - 32;
                }
              }
              if ( (unsigned int)v18 >= 0x61 )
              {
                if ( (unsigned int)v18 > 0x7A )
                {
                  if ( Flink )
                  {
                    if ( (unsigned __int16)v18 >= 0xC0u )
                      LOWORD(v18) = *((_WORD *)&Flink->Flink
                                    + (v18 & 0xF)
                                    + *((unsigned __int16 *)&Flink->Flink
                                      + ((unsigned __int8)v18 >> 4)
                                      + (unsigned int)*((unsigned __int16 *)&Flink->Flink + (v18 >> 8))))
                                  + v18;
                  }
                }
                else
                {
                  LOWORD(v18) = v18 - 32;
                }
              }
              if ( (_WORD)v17 != (_WORD)v18 )
                break;
            }
            ++v16;
          }
          while ( v16 < v15 );
        }
        if ( v16 == v15 )
          return Buffer;
        ++Buffer;
        v14 += 2;
      }
    }
    else
    {
      while ( Buffer <= v12 )
      {
        if ( !memcmp(Buffer, SearchString->Buffer, v8) )
          return Buffer;
        ++Buffer;
      }
    }
  }
  return 0LL;
}
