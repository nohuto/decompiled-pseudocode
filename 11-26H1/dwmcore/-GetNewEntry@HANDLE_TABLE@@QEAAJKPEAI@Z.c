/*
 * XREFs of ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180154BB4
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x18025F65C (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x180154D00 (-Resize@HANDLE_TABLE@@AEAAJI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x18015570C (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::GetNewEntry(HANDLE_TABLE *this, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // ecx
  char *v6; // rdx
  unsigned int v7; // edi
  int v8; // r8d
  int v10; // eax
  int v11; // eax

  v3 = 0;
  if ( dword_1803DCC1C < 0x400 )
  {
    v10 = HANDLE_TABLE::Resize((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, 0x400u);
    v3 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x11Eu, 0LL);
      return v3;
    }
  }
  *a3 = 0;
  v5 = dword_1803DCC20;
  v6 = (char *)qword_1803DCC28;
  v7 = dword_1803DCC1C;
  v8 = Size;
  while ( *(_DWORD *)((char *)qword_1803DCC28 + (unsigned int)Size * v5) )
  {
    if ( ++v5 == dword_1803DCC1C )
      v5 = 1;
    if ( v5 == dword_1803DCC20 )
    {
      v5 = 0;
      break;
    }
  }
  dword_1803DCC20 = v5 + 1;
  if ( v5 + 1 == dword_1803DCC1C )
    dword_1803DCC20 = 1;
  if ( !v5 )
  {
    v11 = HANDLE_TABLE::ResizeToFit((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, dword_1803DCC1C);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x154u, 0LL);
      return v3;
    }
    v6 = (char *)qword_1803DCC28;
    v8 = Size;
    v5 = v7;
    dword_1803DCC20 = v7 + 1;
  }
  *(_DWORD *)&v6[v8 * v5] = 65;
  *a3 = v5;
  return v3;
}
