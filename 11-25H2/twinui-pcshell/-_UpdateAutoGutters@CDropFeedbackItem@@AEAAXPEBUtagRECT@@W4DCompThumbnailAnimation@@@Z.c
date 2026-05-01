/*
 * XREFs of ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x180525074
 * Callers:
 *     ?UpdateGutters@CDropFeedbackItem@@UEAAJXZ @ 0x180524800 (-UpdateGutters@CDropFeedbackItem@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_ComputeAutoGutterRects@CDropFeedbackItem@@AEAAXPEBUtagRECT@@PEAU2@1@Z @ 0x180524888 (-_ComputeAutoGutterRects@CDropFeedbackItem@@AEAAXPEBUtagRECT@@PEAU2@1@Z.c)
 *     ?_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z @ 0x180524F14 (-_UpdateAutoGutter@CDropFeedbackItem@@AEAAXKAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::_UpdateAutoGutters(__int64 a1, const struct tagRECT *a2, unsigned int a3)
{
  __int64 result; // rax
  struct tagRECT v6; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT v7; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  CDropFeedbackItem::_ComputeAutoGutterRects((CDropFeedbackItem *)a1, a2, &v6, &v7);
  CDropFeedbackItem::_UpdateAutoGutter(a1, 0x2000, &v6, a3);
  CDropFeedbackItem::_UpdateAutoGutter(a1, 0x4000, &v7, a3);
  result = *(unsigned int *)(a1 + 72);
  *(_DWORD *)(a1 + 160) = result;
  *(_BYTE *)(a1 + 157) = 0;
  return result;
}
