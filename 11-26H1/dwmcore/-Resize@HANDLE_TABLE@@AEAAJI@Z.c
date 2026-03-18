/*
 * XREFs of ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x180154D00
 * Callers:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x180154BB4 (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x18015570C (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1801555A0 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall HANDLE_TABLE::Resize(HANDLE_TABLE *this, unsigned int a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  int v6; // r9d
  unsigned int v7; // ebx
  unsigned int v9; // edi
  char *v10; // rax
  char *v11; // r15
  unsigned int v12; // [rsp+20h] [rbp-28h]

  if ( a2 < *((_DWORD *)this + 3) )
  {
    v7 = -2147024809;
    v12 = 219;
    goto LABEL_8;
  }
  v4 = *((unsigned int *)this + 2);
  v5 = v4 * *((unsigned int *)this + 3);
  if ( v5 <= 0xFFFFFFFF )
  {
    v9 = v4 * a2;
    if ( v4 * (unsigned __int64)a2 > 0xFFFFFFFF )
    {
      v12 = 223;
      goto LABEL_4;
    }
    v7 = 0;
    v10 = (char *)DefaultHeap::Realloc(*((void **)this + 3), v9);
    v11 = v10;
    if ( v10 )
    {
      memset_0(&v10[(unsigned int)v5], 0, v9 - (unsigned int)v5);
      *((_QWORD *)this + 3) = v11;
      *((_DWORD *)this + 3) = a2;
      return v7;
    }
    v7 = -2147024882;
    v12 = 227;
LABEL_8:
    v6 = v7;
    goto LABEL_5;
  }
  v12 = 222;
LABEL_4:
  v6 = -2147024362;
  v7 = -2147024362;
LABEL_5:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v12, 0LL);
  return v7;
}
