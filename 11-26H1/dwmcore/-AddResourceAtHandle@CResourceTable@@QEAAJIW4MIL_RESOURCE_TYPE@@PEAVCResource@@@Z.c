/*
 * XREFs of ?AddResourceAtHandle@CResourceTable@@QEAAJIW4MIL_RESOURCE_TYPE@@PEAVCResource@@@Z @ 0x18018984C
 * Callers:
 *     ?CompleteDuplicateResource@CChannelContext@@QEAAJI@Z @ 0x180189730 (-CompleteDuplicateResource@CChannelContext@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x18015570C (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z @ 0x180189944 (-CountResource@CResourceTable@@AEAAXW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CResourceTable::AddResourceAtHandle(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v12; // eax
  int v13; // r9d
  int v14; // eax

  v4 = 0;
  if ( !a3 || !a2 )
  {
    v12 = 398;
LABEL_8:
    v13 = -2147024809;
    v4 = -2147024809;
LABEL_9:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, v12, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x22u, 0LL);
    return v4;
  }
  if ( a2 >= *(_DWORD *)(a1 + 28) )
  {
    v14 = HANDLE_TABLE::ResizeToFit((HANDLE_TABLE *)(a1 + 16), a2);
    v4 = v14;
    if ( v14 < 0 )
    {
      v13 = v14;
      v12 = 411;
      goto LABEL_9;
    }
  }
  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(_DWORD *)(a1 + 24) * a2;
  if ( *(_DWORD *)(v10 + v9) )
  {
    v12 = 426;
    goto LABEL_8;
  }
  *(_DWORD *)(v10 + v9) = a3;
  *(_QWORD *)(*(_DWORD *)(a1 + 24) * a2 + *(_QWORD *)(a1 + 40) + 8LL) = a4;
  CResourceTable::CountResource(a1, a3);
  return v4;
}
