/*
 * XREFs of ??1CInteractionRoot@@EEAA@XZ @ 0x1800A7A2C
 * Callers:
 *     ??_ECInteractionRoot@@EEAAPEAXI@Z @ 0x1800A79E0 (--_ECInteractionRoot@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1CInteractionProcessor@@QEAA@XZ @ 0x1800A9580 (--1CInteractionProcessor@@QEAA@XZ.c)
 */

void __fastcall CInteractionRoot::~CInteractionRoot(CInteractionRoot *this)
{
  CInteractionProcessor::~CInteractionProcessor((CInteractionRoot *)((char *)this + 24));
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((char *)this + 16);
}
