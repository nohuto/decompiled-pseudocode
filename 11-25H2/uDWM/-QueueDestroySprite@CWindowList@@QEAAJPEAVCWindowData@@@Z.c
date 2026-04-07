/*
 * XREFs of ?QueueDestroySprite@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x1800790F4
 * Callers:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180006850 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180007D78 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::QueueDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  char *v2; // r10
  unsigned int v3; // edi
  __int64 v4; // rax
  __int64 v6; // r9
  unsigned int v7; // r8d
  struct CWindowData **v8; // rcx
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  int v11; // eax
  struct CWindowData *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v2 = (char *)this + 280;
  v3 = 0;
  v4 = *((unsigned int *)this + 76);
  v6 = *((_QWORD *)this + 35);
  v7 = 0;
  if ( (_DWORD)v4 )
  {
    v8 = (struct CWindowData **)*((_QWORD *)this + 35);
    do
    {
      if ( a2 == *v8 )
        break;
      ++v7;
      ++v8;
    }
    while ( v7 < (unsigned int)v4 );
  }
  if ( v7 >= *((_DWORD *)this + 76) )
  {
    v9 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      v10 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB3u, 0LL);
    }
    else
    {
      v10 = 0;
      if ( v9 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v6 + 8 * v4) = a2;
        *((_DWORD *)v2 + 6) = v9;
      }
      else
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v2, 8, 1, &v13);
        v10 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xBEu, 0LL);
      }
    }
    return v10;
  }
  return v3;
}
