/*
 * XREFs of ?MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z @ 0x14006B018
 * Callers:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x140090BD8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U2@U-$_tlgWrapperByVal@$00@@U3@.c)
 */

void __fastcall InputTraceLogging::Cursor::Api::MovePointer(
        __int64 a1,
        __int64 a2,
        int a3,
        void *a4,
        unsigned __int64 a5)
{
  int v7; // r14d
  int v8; // r15d
  bool v9; // bl
  __int64 v10; // rdx
  __int64 v11; // rcx
  bool v12; // al
  int v13; // r8d
  int v14; // r9d
  bool v15; // [rsp+60h] [rbp-20h] BYREF
  bool v16[3]; // [rsp+61h] [rbp-1Fh] BYREF
  int v17; // [rsp+64h] [rbp-1Ch] BYREF
  int v18; // [rsp+68h] [rbp-18h] BYREF
  int v19; // [rsp+6Ch] [rbp-14h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  void *v21; // [rsp+78h] [rbp-8h] BYREF

  v7 = a2;
  v8 = a1;
  if ( dword_1403AA9C0 )
  {
    if ( (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
    {
      v9 = IS_USERCRIT_OWNED_AT_ALL(a1, a2);
      v12 = IS_USERCRIT_OWNED_EXCLUSIVE(v11, v10);
      if ( (unsigned int)dword_1403AA9C0 > 4 && (qword_1403AA9D0 & 8) != 0 && (qword_1403AA9D8 & 8) == qword_1403AA9D8 )
      {
        v15 = v12;
        v20 = a5;
        v16[0] = v9;
        v21 = a4;
        v17 = a3;
        v18 = v7;
        v19 = v8;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          (unsigned int)&dword_1403AA9C0,
          (unsigned int)&unk_140378595,
          v13,
          v14,
          (__int64)&v19,
          (__int64)&v18,
          (__int64)&v17,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)v16,
          (__int64)&v15);
      }
    }
  }
}
