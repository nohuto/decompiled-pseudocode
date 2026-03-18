/*
 * XREFs of ?MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z @ 0x1400606D8
 * Callers:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x140060460 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400C7970 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1401ED808 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::MovePointer(int a1, int a2, int a3, void *a4, unsigned __int64 a5)
{
  bool v9; // bl
  bool v10; // al
  int v11; // r8d
  int v12; // r9d
  bool v13; // [rsp+60h] [rbp-20h] BYREF
  bool v14[3]; // [rsp+61h] [rbp-1Fh] BYREF
  int v15; // [rsp+64h] [rbp-1Ch] BYREF
  int v16; // [rsp+68h] [rbp-18h] BYREF
  int v17; // [rsp+6Ch] [rbp-14h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp-10h] BYREF
  void *v19; // [rsp+78h] [rbp-8h] BYREF

  if ( dword_14039BB50 )
  {
    if ( (qword_14039BB60 & 8) != 0 && (qword_14039BB68 & 8) == qword_14039BB68 )
    {
      v9 = IS_USERCRIT_OWNED_AT_ALL();
      v10 = IS_USERCRIT_OWNED_EXCLUSIVE();
      if ( (unsigned int)dword_14039BB50 > 4 && (qword_14039BB60 & 8) != 0 && (qword_14039BB68 & 8) == qword_14039BB68 )
      {
        v13 = v10;
        v18 = a5;
        v14[0] = v9;
        v19 = a4;
        v15 = a3;
        v16 = a2;
        v17 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          (unsigned int)&dword_14039BB50,
          (unsigned int)&unk_14036AFD1,
          v11,
          v12,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)v14,
          (__int64)&v13);
      }
    }
  }
}
