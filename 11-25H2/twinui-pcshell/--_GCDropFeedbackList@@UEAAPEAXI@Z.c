/*
 * XREFs of ??_GCDropFeedbackList@@UEAAPEAXI@Z @ 0x180519EE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 *     ??1CDropFeedbackList@@UEAA@XZ @ 0x180519EB0 (--1CDropFeedbackList@@UEAA@XZ.c)
 */

CDropFeedbackList *__fastcall CDropFeedbackList::`scalar deleting destructor'(CDropFeedbackList *this, char a2)
{
  CDropFeedbackList::~CDropFeedbackList(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
