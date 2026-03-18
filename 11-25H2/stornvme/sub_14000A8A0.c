/*
 * XREFs of sub_14000A8A0 @ 0x14000A8A0
 * Callers:
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_14000EBE0 @ 0x14000EBE0 (sub_14000EBE0.c)
 *     sub_1400130E0 @ 0x1400130E0 (sub_1400130E0.c)
 *     sub_14001D940 @ 0x14001D940 (sub_14001D940.c)
 *     sub_140023F00 @ 0x140023F00 (sub_140023F00.c)
 *     sub_140024E80 @ 0x140024E80 (sub_140024E80.c)
 *     sub_140026BB0 @ 0x140026BB0 (sub_140026BB0.c)
 *     sub_14002D810 @ 0x14002D810 (sub_14002D810.c)
 *     sub_14002E4EC @ 0x14002E4EC (sub_14002E4EC.c)
 *     sub_14002E924 @ 0x14002E924 (sub_14002E924.c)
 * Callees:
 *     sub_140008E60 @ 0x140008E60 (sub_140008E60.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_14001F48C @ 0x14001F48C (sub_14001F48C.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14000A8A0(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // rbx
  __int64 v11; // r8
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned __int64 v16; // rbx
  __int64 v17; // rax

  if ( sub_140008E60(a1, a2) )
  {
    if ( *(_DWORD *)(v6 + 12) == 251658240 )
    {
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v8 = *(_QWORD *)(v6 + 104);
      else
        v8 = *(_QWORD *)(v6 + 56);
      result = v8 & 0xFFF;
      if ( (v8 & 0xFFF) != 0 )
        v8 = v8 - result + 4096;
      v10 = *(_QWORD *)(v8 + 4200);
    }
    else
    {
      result = a1 + 1016;
      if ( a2 == a1 + 1016 )
      {
        v10 = a1 + 1008;
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 1392);
        if ( v11 && (v12 = 0, *(_WORD *)(a1 + 1552)) )
        {
          while ( 1 )
          {
            v10 = v11 + ((unsigned __int64)v12 << 7);
            result = v10 + 8;
            if ( a2 == v10 + 8 )
              break;
            if ( ++v12 >= *(unsigned __int16 *)(a1 + 1552) )
              goto LABEL_15;
          }
        }
        else
        {
LABEL_15:
          v13 = *(_QWORD *)(a1 + 1400);
          if ( v13 && (v14 = 0, *(_WORD *)(a1 + 1554)) )
          {
            while ( 1 )
            {
              v10 = v13 + ((unsigned __int64)v14 << 7);
              result = v10 + 8;
              if ( a2 == v10 + 8 )
                break;
              if ( ++v14 >= *(unsigned __int16 *)(a1 + 1554) )
                goto LABEL_19;
            }
          }
          else
          {
LABEL_19:
            v15 = 0;
            while ( 1 )
            {
              v16 = a1 + ((unsigned __int64)v15 << 7);
              result = v16 + 1144;
              if ( a2 == v16 + 1144 )
                break;
              if ( ++v15 >= 2 )
                return result;
            }
            v10 = v16 + 1136;
          }
        }
      }
    }
    if ( v10 )
    {
      *(_BYTE *)v10 = 0;
      if ( *(_DWORD *)(a2 + 12) == 251658240 )
      {
        if ( (*(_BYTE *)(v10 + 1) & 1) != 0 )
        {
          sub_140032C80(*(_QWORD *)(v10 + 96), 0LL, 4232LL);
          result = *(_QWORD *)(v10 + 96);
          *(_BYTE *)(v10 + 11) = 0;
          *(_QWORD *)(v10 + 64) = result;
          *(_QWORD *)(result + 4200) = v10;
          *(_BYTE *)v10 = 0;
          if ( a1 != -4320 && v10 != -112 )
            return StorPortExtendedFunction(38LL, a1, a1 + 4320, v10 + 112);
        }
        else if ( (*(_BYTE *)(v10 + 1) & 2) != 0 )
        {
          return StorPortExtendedFunction(50LL, a1, 0LL, 0LL);
        }
        else
        {
          sub_14000CF50(a1, 0x2000LL, a2 + 56, *(_QWORD *)(v10 + 104));
          return sub_14001F48C(a1, v10);
        }
      }
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 4056) & 0x10000) != 0 )
    {
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v17 = *(_QWORD *)(v6 + 104);
      else
        v17 = *(_QWORD *)(v6 + 56);
      if ( (v17 & 0xFFF) != 0 )
        v17 = v17 - (v17 & 0xFFF) + 4096;
      if ( *(_DWORD *)(v17 + 4220) )
        StorPortExtendedFunction(127LL, a1, a2, v7);
    }
    if ( a3 )
      return StorPortNotification(4104LL, a1, a2);
    else
      return StorPortNotification(0LL, a1, a2);
  }
  return result;
}
