/*
 * XREFs of ?CleanStaleFork@CManipulationContext@@AEAAXW4InputType@@PEAVCInteraction@@@Z @ 0x180226DB0
 * Callers:
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x180227190 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800982C0 (_tlgKeywordOn.c)
 *     ?RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z @ 0x1800A769C (-RemoveInteractionLeafFromTree@CManipulationContext@@CAXPEAVCInteraction@@@Z.c)
 *     ?GetTotalNumContacts@CInteraction@@AEBAIXZ @ 0x1800A872C (-GetTotalNumContacts@CInteraction@@AEBAIXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800AB4E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationContext::CleanStaleFork(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // [rsp+30h] [rbp-59h] BYREF
  __int64 v11; // [rsp+38h] [rbp-51h] BYREF
  __int64 v12; // [rsp+40h] [rbp-49h] BYREF
  __int64 v13; // [rsp+48h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v15; // [rsp+70h] [rbp-19h]
  __int64 v16; // [rsp+78h] [rbp-11h]
  __int64 *v17; // [rsp+80h] [rbp-9h]
  __int64 v18; // [rsp+88h] [rbp-1h]
  __int64 *v19; // [rsp+90h] [rbp+7h]
  __int64 v20; // [rsp+98h] [rbp+Fh]
  int *v21; // [rsp+A0h] [rbp+17h]
  __int64 v22; // [rsp+A8h] [rbp+1Fh]

  if ( a3 )
  {
    v3 = a2 - 1;
    v4 = a3;
    do
    {
      if ( *(char *)(v4 + 200) < 0 )
        break;
      v7 = *(_QWORD *)(v4 + 216);
      if ( (unsigned int)dword_1803DC880 > 4 && tlgKeywordOn((__int64)&dword_1803DC880, 2LL) )
      {
        v8 = (int)v3;
        if ( v3 >= 6 )
          v8 = 0LL;
        v10 = *(_DWORD *)(v4 + 4 * v8 + 256);
        v11 = v7;
        v21 = &v10;
        v12 = v4;
        v19 = &v11;
        v13 = a1;
        v17 = &v12;
        v15 = &v13;
        v22 = 4LL;
        v20 = 8LL;
        v18 = 8LL;
        v16 = 8LL;
        tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803DC880, byte_1803B06A3, 0LL, 0LL, 6u, &v14);
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v4 + 72) + 56LL))(v4 + 72, a2);
      v9 = (int)v3;
      if ( v3 >= 6 )
        v9 = 0LL;
      --*(_DWORD *)(v4 + 4 * v9 + 256);
      if ( !(unsigned int)CInteraction::GetTotalNumContacts((CInteraction *)v4) )
        CManipulationContext::RemoveInteractionLeafFromTree((struct CInteraction *)v4);
      *(_BYTE *)(v4 + 201) &= ~1u;
      v4 = v7;
    }
    while ( v7 );
  }
}
