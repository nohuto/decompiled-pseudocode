/*
 * XREFs of ?Show@CDropFeedbackItem@@UEAAXXZ @ 0x180524770
 * Callers:
 *     <none>
 * Callees:
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180524AF8 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x1805253F8 (McTemplateU0qdddd_EventWriteTransfer.c)
 */

void __fastcall CDropFeedbackItem::Show(CDropFeedbackItem *this)
{
  int v2; // ecx

  CDropFeedbackItem::_Update(this, 0LL, 0LL);
  if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
    McTemplateU0qdddd_EventWriteTransfer(
      v2,
      (unsigned int)&DropFeedbackItem_Show_Info,
      *((_DWORD *)this + 8),
      *((_DWORD *)this + 31),
      *((_DWORD *)this + 32),
      *((_DWORD *)this + 33),
      *((_DWORD *)this + 34));
}
