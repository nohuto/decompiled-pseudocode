/*
 * XREFs of ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18019E404
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002FF00 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLegacySurfaceManager::AddIntervalOneDxBltEventId(CLegacySurfaceManager *this, __int64 a2)
{
  char *v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // r9
  unsigned int v5; // r8d
  __int64 v6; // rax
  unsigned int v7; // ecx
  unsigned int v8; // eax
  _QWORD *v10; // rax
  __int64 *v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v2 = (char *)this + 176;
  v3 = 0;
  v4 = *((_QWORD *)this + 22);
  v5 = 0;
  if ( *((_DWORD *)this + 50) )
  {
    v10 = (_QWORD *)*((_QWORD *)this + 22);
    do
    {
      if ( a2 == *v10 )
        break;
      ++v5;
      ++v10;
    }
    while ( v5 < *((_DWORD *)this + 50) );
  }
  v6 = *((unsigned int *)this + 50);
  if ( v5 == (_DWORD)v6 )
  {
    v7 = v6 + 1;
    if ( (int)v6 + 1 >= (unsigned int)v6 )
    {
      if ( v7 <= *((_DWORD *)v2 + 5) )
      {
        *(_QWORD *)(v4 + 8 * v6) = a2;
        *((_DWORD *)v2 + 6) = v7;
        return v3;
      }
      v11 = &v12;
      v3 = DynArrayImpl<0>::Grow((__int64)v2, 8u, 1, 0, (unsigned __int64 *)&v11);
      if ( (v3 & 0x80000000) == 0 )
      {
        *(_QWORD *)((unsigned int)(8 * (*((_DWORD *)v2 + 6))++) + *(_QWORD *)v2) = *v11;
        return v3;
      }
      v8 = 194;
    }
    else
    {
      v3 = -2147024362;
      v8 = 183;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, v8, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v3, 0x1C5u, 0LL);
  }
  return v3;
}
