/*
 * XREFs of MiShadowTopLevelPxes @ 0x140344360
 * Callers:
 *     MiCopyTopLevelMappings @ 0x140344208 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x140710830 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14031E2BC (MiWritePteShadow.c)
 *     MiSanitizeShadowPxe @ 0x140344188 (MiSanitizeShadowPxe.c)
 *     MiTransformValidPteInPlace @ 0x1403444D8 (MiTransformValidPteInPlace.c)
 */

void __fastcall MiShadowTopLevelPxes(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 KernelWaitTime; // r15
  __int64 v7; // rbx
  __int64 *v8; // rcx
  __int64 PteShadow; // r10
  __int64 *v10; // r11
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // [rsp+78h] [rbp+20h]

  v4 = a2;
  if ( (MiFlags & 0x1800000) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 1288);
    if ( v5 )
    {
      if ( PsInitialSystemProcess )
      {
        KernelWaitTime = PsInitialSystemProcess[2].KernelWaitTime;
        v7 = ((unsigned int)a2 >> 3) & 0x1FF;
        do
        {
          if ( _bittest64((const signed __int64 *)&stru_140E2DAB0.SecureThreadCookie, (unsigned int)(v7 - 256)) )
          {
            v8 = (__int64 *)(KernelWaitTime + 8 * v7);
            PteShadow = *v8;
            if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow((unsigned __int64)v8, *v8);
            v10 = (__int64 *)(v5 + 8 * v7);
            v11 = *v10;
            if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
              v11 = MiReadPteShadow(v5 + 8 * v7, *v10);
            if ( PteShadow != v11 )
            {
              v12 = (__int64 *)(v5 + 8 * v7);
              v13 = *v12;
              if ( (unsigned __int64)v12 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v12 <= 0xFFFFF6FB7DBED7F8uLL )
                LOBYTE(v13) = MiReadPteShadow((unsigned __int64)v12, *v12);
              if ( (v13 & 1) != 0 )
              {
                MiTransformValidPteInPlace((ULONG_PTR)v10, 3);
              }
              else
              {
                v16 = PteShadow;
                v14 = 0;
                if ( (unsigned __int64)v10 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  v15 = MiSanitizeShadowPxe();
                  PteShadow = v16;
                  v14 = v15;
                }
                *v10 = PteShadow;
                if ( v14 )
                  MiWritePteShadow();
              }
            }
          }
          v4 += 8LL;
          v7 = (unsigned int)(v7 + 1);
          --a3;
        }
        while ( a3 );
      }
    }
  }
}
