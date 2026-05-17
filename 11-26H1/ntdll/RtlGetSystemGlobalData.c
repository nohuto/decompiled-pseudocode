/*
 * XREFs of RtlGetSystemGlobalData @ 0x1800BCB20
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall RtlGetSystemGlobalData(int a1, _QWORD *a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 i; // [rsp+48h] [rbp+20h]

  if ( a1 == 1 )
  {
    if ( a3 == 8 )
    {
      *a2 = MEMORY[0x7FFE0250];
      return 0LL;
    }
    else
    {
      return 3221225990LL;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 2:
        if ( a3 != 8 )
          return 3221225990LL;
        for ( i = MEMORY[0x7FFE0008]; MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010]; i = MEMORY[0x7FFE0008] )
          _mm_pause();
        goto LABEL_19;
      case 3:
        if ( a3 != 8 )
          return 3221225990LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v5 = (__int64)NtCurrentPeb()->SharedData + 592;
        else
          v5 = 2147352608LL;
        i = *(_QWORD *)v5;
        if ( HIDWORD(*(_QWORD *)v5) == *(_DWORD *)(v5 + 8) )
        {
LABEL_19:
          *a2 = i;
          result = 0LL;
        }
        else
        {
          do
            _mm_pause();
          while ( HIDWORD(*(_QWORD *)v5) != *(_DWORD *)(v5 + 8) );
          *a2 = *(_QWORD *)v5;
          result = 0LL;
        }
        break;
      case 4:
        if ( a3 != 2 )
          return 3221225990LL;
        *(_WORD *)a2 = MEMORY[0x7FFE002C];
        result = 0LL;
        break;
      case 5:
        if ( a3 != 2 )
          return 3221225990LL;
        *(_WORD *)a2 = MEMORY[0x7FFE002E];
        result = 0LL;
        break;
      case 6:
        if ( a3 != 4 )
          return 3221225990LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          *(_DWORD *)a2 = *((_DWORD *)NtCurrentPeb()->SharedData + 146);
        else
          *(_DWORD *)a2 = MEMORY[0x7FFE0240];
        result = 0LL;
        break;
      case 7:
        if ( a3 != 4 )
          return 3221225990LL;
        *(_DWORD *)a2 = MEMORY[0x7FFE026C];
        result = 0LL;
        break;
      case 8:
        if ( a3 != 4 )
          return 3221225990LL;
        *(_DWORD *)a2 = MEMORY[0x7FFE0270];
        result = 0LL;
        break;
      case 9:
        if ( a3 != 8 )
          return 3221225990LL;
        *a2 = MEMORY[0x7FFE02C8];
        result = 0LL;
        break;
      case 10:
        if ( a3 != 1 )
          return 3221225990LL;
        *(_BYTE *)a2 = MEMORY[0x7FFE02D4];
        result = 0LL;
        break;
      case 11:
        if ( a3 != 2 )
          return 3221225990LL;
        *(_WORD *)a2 = MEMORY[0x7FFE02D6];
        result = 0LL;
        break;
      case 12:
        if ( a3 != 1 )
          return 3221225990LL;
        *(_BYTE *)a2 = MEMORY[0x7FFE02EC];
        result = 0LL;
        break;
      case 13:
        if ( a3 != 4 )
          return 3221225990LL;
        *(_DWORD *)a2 = MEMORY[0x7FFE02E4];
        result = 0LL;
        break;
      case 14:
        if ( a3 != 4 )
          return 3221225990LL;
        *(_DWORD *)a2 = MEMORY[0x7FFE02F0];
        result = 0LL;
        break;
      case 16:
        if ( a3 != 1 )
          return 3221225990LL;
        *(_BYTE *)a2 = MEMORY[0x7FFE03C6];
        result = 0LL;
        break;
      case 17:
        if ( a3 != 2 )
          return 3221225990LL;
        *(_WORD *)a2 = MEMORY[0x7FFE03C6];
        result = 0LL;
        break;
      case 18:
        if ( a3 != 8 )
          return 3221225990LL;
        *a2 = MEMORY[0x7FFE03B8];
        result = 0LL;
        break;
      default:
        result = 3221225485LL;
        break;
    }
  }
  return result;
}
