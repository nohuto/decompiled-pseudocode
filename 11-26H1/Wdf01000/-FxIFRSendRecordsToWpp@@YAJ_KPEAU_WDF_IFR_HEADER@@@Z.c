/*
 * XREFs of ?FxIFRSendRecordsToWpp@@YAJ_KPEAU_WDF_IFR_HEADER@@@Z @ 0x14008D55C
 * Callers:
 *     ?FxIFRReplay@@YAX_K@Z @ 0x14008D21C (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     FxWmiTraceMessage @ 0x140056738 (FxWmiTraceMessage.c)
 *     ?FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z @ 0x14008D798 (-FxIFRValidateRecord@@YAJPEAU_WDF_IFR_RECORD@@_K1@Z.c)
 */

__int64 __fastcall FxIFRSendRecordsToWpp(unsigned __int64 LoggerHandle, _WDF_IFR_HEADER *HeaderCopy)
{
  unsigned int Size; // r8d
  unsigned __int8 *Base; // rdi
  unsigned int v4; // r13d
  unsigned __int64 v5; // r14
  __int64 Previous; // r15
  _WDF_IFR_RECORD *v7; // rsi
  int v8; // ebx
  unsigned int v9; // r10d
  unsigned int v10; // ebp
  char v11; // r12
  _WORD *v12; // r9
  unsigned __int16 v13; // r11
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int16 v16; // ax
  char v19; // [rsp+98h] [rbp+10h]
  __int64 Pool2; // [rsp+A8h] [rbp+20h]

  Size = HeaderCopy->Size;
  Base = HeaderCopy->Base;
  v19 = 0;
  v4 = Size / 0x48;
  v5 = (unsigned __int64)&Base[Size - 1];
  if ( v5 < (unsigned __int64)Base )
    return (unsigned int)-1073741675;
  if ( v5 < 0x24 )
    return (unsigned int)-1073741675;
  Previous = HeaderCopy->Offset.u.s.Previous;
  v7 = (_WDF_IFR_RECORD *)&Base[Previous];
  if ( &Base[Previous] < Base )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v8 = FxIFRValidateRecord((_WDF_IFR_RECORD *)&Base[Previous], v5 - 36, (unsigned __int64)&Base[Size - 1]);
    if ( v8 >= 0 && v7->Signature != (_WORD)v9 )
    {
      v10 = v9;
      v11 = v9;
      Pool2 = ExAllocatePool2(256LL, 2LL * v4, 1733064774LL);
      v12 = (_WORD *)Pool2;
      if ( Pool2 )
      {
        if ( v4 )
        {
          while ( 1 )
          {
            v8 = FxIFRValidateRecord(v7, v5 - 36, v5);
            if ( v8 < 0 || v7->Signature != 12876 )
              break;
            v14 = v10++;
            v12[v14] = Previous;
            if ( v7 == (_WDF_IFR_RECORD *)Base )
              v11 = 1;
            Previous = v7->PrevOffset;
            v7 = (_WDF_IFR_RECORD *)&Base[Previous];
            if ( &Base[Previous] < Base )
            {
              v8 = -1073741675;
              break;
            }
            v8 = 0;
            if ( (!v11 || (_WORD)Previous) && (!v19 || (unsigned __int16)Previous > v13) )
            {
              if ( v11 && (_WORD)Previous )
              {
                v19 = 1;
                v11 = 0;
              }
              if ( v10 < v4 )
                continue;
            }
            break;
          }
          while ( v10 )
          {
            v15 = (unsigned __int16)v12[--v10];
            v16 = *(_WORD *)&Base[v15 + 2];
            if ( v16 <= 0x24u )
            {
              if ( v16 != 36 )
                break;
              FxWmiTraceMessage(LoggerHandle, 43LL, (_GUID *)&Base[v15 + 12], *(_WORD *)&Base[v15 + 10], 0LL);
            }
            else
            {
              FxWmiTraceMessage(
                LoggerHandle,
                43LL,
                (_GUID *)&Base[v15 + 12],
                *(_WORD *)&Base[v15 + 10],
                &Base[v15 + 36],
                *(unsigned __int16 *)&Base[v15 + 2] - 36LL,
                0LL);
            }
            v12 = (_WORD *)Pool2;
          }
        }
        ExFreePoolWithTag(v12, 0x674C7846u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return (unsigned int)v8;
}
