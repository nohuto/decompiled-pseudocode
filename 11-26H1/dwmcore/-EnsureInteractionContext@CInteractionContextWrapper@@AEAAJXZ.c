/*
 * XREFs of ?EnsureInteractionContext@CInteractionContextWrapper@@AEAAJXZ @ 0x1801B2A3C
 * Callers:
 *     ?ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z @ 0x1801B2A00 (-ApplySetupInfo@CInteractionContextWrapper@@UEAAJAEBUSetupInfo@@@Z.c)
 *     ?ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@AEBVCMILMatrix@@I@Z @ 0x1801E1120 (-ProcessInput@CInteractionContextWrapper@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@A.c)
 * Callees:
 *     ?ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSetupInfo@@@Z @ 0x1801B2AB8 (-ConfigureInteractionContext@CInteractionContextWrapper@@AEAAJPEAUHINTERACTIONCONTEXT__@@AEBUSet.c)
 */

__int64 __fastcall CInteractionContextWrapper::EnsureInteractionContext(CInteractionContextWrapper *this)
{
  __int64 result; // rax
  struct HINTERACTIONCONTEXT__ **v2; // rbx
  struct HINTERACTIONCONTEXT__ *v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+2Ch] [rbp-1Ch]
  char v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+31h] [rbp-17h]
  __int16 v10; // [rsp+35h] [rbp-13h]
  char v11; // [rsp+37h] [rbp-11h]

  result = 0LL;
  v2 = (struct HINTERACTIONCONTEXT__ **)((char *)this + 16);
  if ( !*((_QWORD *)this + 2) )
  {
    result = CreateInteractionContext((char *)this + 16);
    if ( (int)result >= 0 )
    {
      v4 = *v2;
      v5 = 2LL;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v6 = 1110704128;
      v7 = 1110704128;
      v8 = 0;
      return CInteractionContextWrapper::ConfigureInteractionContext(this, v4, (const struct SetupInfo *)&v5);
    }
  }
  return result;
}
