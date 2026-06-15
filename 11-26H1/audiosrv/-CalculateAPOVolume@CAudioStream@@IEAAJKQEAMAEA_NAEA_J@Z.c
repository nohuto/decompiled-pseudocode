/*
 * XREFs of ?CalculateAPOVolume@CAudioStream@@IEAAJKQEAMAEA_NAEA_J@Z @ 0x180025480
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z @ 0x180024214 (-RecalculateVolume@CAudioStream@@QEAAJ_N_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ScalarFromTaper@CVolumeUnit@@QEAANN@Z @ 0x1800255AC (-ScalarFromTaper@CVolumeUnit@@QEAANN@Z.c)
 */

__int64 __fastcall CAudioStream::CalculateAPOVolume(
        CAudioStream *this,
        __int64 a2,
        float *const a3,
        bool *a4,
        __int64 *a5)
{
  int v6; // r10d
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  float *v12; // rbx
  double *v13; // rcx
  float v14; // xmm0_4
  float v16; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = a2;
  if ( (_DWORD)a2 == *((_DWORD *)this + 20) )
  {
    v8 = (unsigned int)a2;
    if ( (_DWORD)a2 )
    {
      v9 = 0LL;
      a2 = (unsigned int)a2;
      do
      {
        a3[v9] = *(float *)(*((_QWORD *)this + 13) + v9 * 4) * *((float *)this + 22);
        ++v9;
        --a2;
      }
      while ( a2 );
    }
    v10 = *((_QWORD *)this + 12);
    *a4 = *((_BYTE *)this + 528);
    v11 = *((_QWORD *)this + 65);
    if ( v10 >= v11 )
      v11 = v10;
    *a5 = v11;
    if ( v6 )
    {
      v12 = a3;
      do
      {
        v13 = (double *)*((_QWORD *)this + 67);
        v14 = *(float *)(*((_QWORD *)this + 64) + (char *)v12 - (char *)a3) * *v12;
        if ( v13 )
        {
          v16 = CVolumeUnit::ScalarFromTaper((CVolumeUnit *)v13, v14 * (v13[4] - v13[3]) + v13[3]);
          *v12 = v16;
        }
        else
        {
          *v12 = v14;
        }
        ++v12;
        --v8;
      }
      while ( v8 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A6,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
