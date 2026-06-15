/*
 * XREFs of ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012F060
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18003C3C4 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ?GetStaticMaskPC@SpatialAudio@@YA?AW4AudioObjectType@@AEBU_GUID@@@Z @ 0x18003B384 (-GetStaticMaskPC@SpatialAudio@@YA-AW4AudioObjectType@@AEBU_GUID@@@Z.c)
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x1800AB550 (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureMultiChannel(
        SpatialAudioEncoderProperties *this,
        struct _GUID *a2)
{
  const struct _GUID *v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int16 v12; // ax

  *((_DWORD *)this + 179) = SpatialAudio::GetStaticMaskPC((SpatialAudio *)a2, a2);
  *((_WORD *)this + 362) = SpatialAudio::GetMaxDynamicObjectCountPC((SpatialAudio *)a2, v4);
  *(struct _GUID *)((char *)this + 700) = *a2;
  *((_DWORD *)this + 180) = 1;
  *(_OWORD *)((char *)this + 726) = xmmword_18018A540;
  *(_OWORD *)((char *)this + 742) = xmmword_18018A550;
  *(_OWORD *)((char *)this + 758) = xmmword_18018A560;
  *(_OWORD *)((char *)this + 774) = xmmword_18018A570;
  *(_OWORD *)((char *)this + 790) = xmmword_18018A580;
  *(_OWORD *)((char *)this + 806) = xmmword_18018A590;
  *(_OWORD *)((char *)this + 822) = xmmword_18018A5A0;
  *(_DWORD *)((char *)this + 838) = 0;
  v5 = *(_OWORD *)((char *)this + 712);
  *(_OWORD *)((char *)this + 842) = *(_OWORD *)((char *)this + 696);
  v6 = *(_OWORD *)((char *)this + 728);
  *(_OWORD *)((char *)this + 858) = v5;
  v7 = *(_OWORD *)((char *)this + 744);
  *(_OWORD *)((char *)this + 874) = v6;
  v8 = *(_OWORD *)((char *)this + 760);
  *(_OWORD *)((char *)this + 890) = v7;
  v9 = *(_OWORD *)((char *)this + 776);
  *(_OWORD *)((char *)this + 906) = v8;
  v10 = *(_OWORD *)((char *)this + 792);
  *(_OWORD *)((char *)this + 922) = v9;
  v11 = *(_OWORD *)((char *)this + 824);
  *(_OWORD *)((char *)this + 938) = v10;
  v12 = *((_WORD *)this + 420);
  *(_OWORD *)((char *)this + 954) = *(_OWORD *)((char *)this + 808);
  *(_OWORD *)((char *)this + 970) = v11;
  *((_WORD *)this + 493) = v12;
  return 0LL;
}
